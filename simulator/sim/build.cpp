#include <stdint.h>
#include <iostream>
#include <assert.h>
#include <fstream>
#include "include/debug.h"

extern uint8_t pmem[];

// load a binary file into your cpu
uint64_t load_img(char *img_file){

// Lab2 TODO: load the 'img_file' to the start of pmem, and return its size
    std::string filename = std::string(img_file);
    std::ifstream file(filename, std::ios::binary | std::ios::ate);
    assert(file.is_open());
    std::streamsize size = file.tellg();
    file.seekg(0, std::ios::beg);
    file.read((char*)pmem, size);
    file.close();
    return size;
}