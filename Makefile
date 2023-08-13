all: main

H_DIR=headers
S_DIR=sources
BIN_DIR=bin

main: main.c
	gcc main.c -I$(H_DIR) -o $(BIN_DIR)/exec.bin
