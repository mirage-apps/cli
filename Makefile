# the compiler: gcc for C program, define as g++ for C++
CC = g++
# compiler flags:
#  -g     - this flag adds debugging information to the executable file
#  -Wall  - this flag is used to turn on most compiler warnings
CFLAGS  = -Wall

# The build target 
TARGET = src/main

BIN = bin/mirage

.PHONY: all setup submodules execute clean

all: $(TARGET)
	bin/mirage
	rm -rf bin/*

binary: $(TARGET)
$(TARGET): $(TARGET).cpp
	$(CC) $(CFLAGS) -o $(BIN) $(TARGET).cpp

clean:
	rm -rf bin/*