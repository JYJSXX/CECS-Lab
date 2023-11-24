#include <fs.h>
#include <debug.h>
#include <device.h>

enum {FD_STDIN, FD_STDOUT, FD_STDERR, FD_EVENTS, FD_FB, FD_DISPINFO};

/* This is the information about all files in disk. */
 Finfo file_table[] __attribute__((used)) = {
  [FD_STDIN]    = {"stdin",           0, 0, 0, invalid_read,  invalid_write},
  [FD_STDOUT]   = {"stdout",          0, 0, 0, invalid_read,  invalid_write},
  [FD_STDERR]   = {"stderr",          0, 0, 0, invalid_read,  invalid_write},
  [FD_EVENTS]   = {"/dev/events",     0, 0, 0, invalid_read,  invalid_write},
  [FD_FB]       = {"/dev/fb",         0, 0, 0, invalid_read,  invalid_write},
  [FD_DISPINFO] = {"/proc/dispinfo",  0, 0, 0, invalid_read,  invalid_write},
  #include "files.h"
};

/* Init the file system. */
void init_fs() {
  Log("Initializing file system...");
  DEV_GPU_CONFIG_T gpu_config = io_read(DEV_GPU_CONFIG);
  file_table[FD_FB].size = gpu_config.height * gpu_config.width * 4;
}

/* Open a file and return the size of file. */
int fs_open(const char *pathname, int flags, int mode) {
  // Lab7 TODO: traverse the file_table and find the file
  
  int num_of_elfh = sizeof(file_table) / sizeof(file_table[0]);
  for(int i = 0; i < num_of_elfh; i++){
      if(strcmp(file_table[i].name, pathname) == 0){
          file_table[i].open_offset = 0;
          file_table[i].is_open = 1;
          return i;
      }
  }
  return -1;
}

/* Read `len` bytes of data from the file with `fd` into `buf` */
size_t fs_read(int fd, void *buf, size_t len) {
  // Lab7 TODO: read the file with fd from offset into buf
//   fs_read 首先会检查文件是否打开。如果已经打开，那么 fs_read 会根据文件描述符，在 file_table 中找到对应的文件；再根据文件当前的偏移量，使用 ramdisk_read 从 ramdisk.img 中读取数据到缓冲区中，并将偏移量加上读取长度；
// fs_read 会返回读取的长度。
    if(file_table[fd].is_open){
        if(file_table[fd].open_offset + len > file_table[fd].size)
            len = file_table[fd].size - file_table[fd].open_offset;
        ramdisk_read(buf, file_table[fd].disk_offset + file_table[fd].open_offset, len);
        file_table[fd].open_offset += len;
        return len;
    }
    else
        return -1;
}


/* Write `len` bytes of data from `buf` into the file with `fd` */
size_t fs_write(int fd, const void *buf, size_t len) {
  // Lab7 TODO: write the file with fd from offset by buf
    if(file_table[fd].is_open){
      int offset = file_table[fd].open_offset;
      int size = file_table[fd].size;
      if(offset + len > size){
          len = size - offset;
      }
      ramdisk_write(buf, file_table[fd].disk_offset + offset, len);
      file_table[fd].open_offset += len;
      return len;
    }
    else{
        return -1;
    }
}

/* Seek the file with `fd` from the `offset` based on `whence` */
size_t fs_lseek(int fd, size_t offset, int whence) {
  // Lab7 TODO: seek the file with fd from the offset based on whence
  if(file_table[fd].is_open){
        switch (whence){
            case SEEK_SET:
            file_table[fd].open_offset = offset < file_table[fd].size ? offset : file_table[fd].size;
            return offset;
            case SEEK_CUR:
            file_table[fd].open_offset = file_table[fd].open_offset + offset < file_table[fd].size ? file_table[fd].open_offset + offset : file_table[fd].size;
            return file_table[fd].open_offset;
            case SEEK_END:
            file_table[fd].open_offset = file_table[fd].size + offset < file_table[fd].size ? file_table[fd].size + offset : file_table[fd].size;
            return file_table[fd].open_offset;
            default:
            return -1;
        }
    }
    else
        return -1;
}

/* Close the file with `fd` */
int fs_close(int fd){
  // Lab7 TODO: close the file with fd
    if(file_table[fd].is_open){
        file_table[fd].is_open = 0;
        return 0;
    }
  else
    return -1;
}
