## Lab1 TODO: create Makefile for functest here

NAMES ?= $(basename $(notdir $(wildcard src/*.c)))
# SRCS=src/%.c
BASE_PORT = $(abspath ../base-port)
# SIM_PATH = ## This is for running the simulator, you can ignore for Lab 1

# -include ../base-port/Makefile
# $(info $(SRCS))
.PHONY: all
all: $(NAMES)

%: src/%.c
	@echo "SRCS=$(basename $<) BASE_PORT=$(BASE_PORT) make -s -f ../base-port/Makefile"
	@NAMES=$@ SRCS=$(basename $<) BASE_PORT=$(BASE_PORT) make -s -f ../base-port/Makefile # 你需要将尖括号包裹的参数替换为合适的值
