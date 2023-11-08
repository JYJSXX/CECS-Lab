## Lab1 TODO: create Makefile for functest here

NAMES ?= $(basename $(notdir $(wildcard src/*.c)))
SRC_FILES := $(wildcard src/*.c)
BASE_PORT = $(abspath ../base-port)
SIM_PATH = $(abspath ../../simulator)
result = 0
ARGS ?= -b
# SIM_PATH = ## This is for running the simulator, you can ignore for Lab 1

# -include ../base-port/Makefile
# $(info $(SRCS))
.PHONY: all clean run
all: $(NAMES)

%: src/%.c
# @echo "SRCS=$(basename $<) BASE_PORT=$(BASE_PORT) make -s -f ../base-port/Makefile"
	@NAMES=$@ SRCS=$(basename $<) BASE_PORT=$(BASE_PORT) SIM_PATH=$(SIM_PATH) ARGS=$(ARGS) make $(MAKECMDGOALS) -s -f ../base-port/Makefile

ifeq ($(result), 0)
	@echo "Test passed!"
	@echo $(result) >> result.txt
else
	@echo "Test failed!"
	@echo $(result) >> result.txt
endif

run: all
	@cat result.txt
	@rm result.txt

clean:
	rm -rf $(abspath ./build)

# -include $(BASE_PORT)/Makefile