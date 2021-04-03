CC=g++

bin: $(CC) -o bin/mirage src/main.cpp

clean: rm -rf bin/*
