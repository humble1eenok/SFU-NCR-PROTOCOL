H_DIR=./headers
S_DIR=./sources
BIN_DIR=./bin

.PHONY: all clean

all: main

main: main.c
	mkdir $(BIN_DIR)/
	gcc main.c -I$(H_DIR) -o $(BIN_DIR)/exec.bin

clean:
	rm -rf $(BIN_DIR)/
