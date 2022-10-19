default: compile run

CC=gcc
CFLAGS=-Wall -O2
TARGET=out

.PHONY: run

compile:
	$(CC) *.c -o $(TARGET)

run: $(TARGET)
	./$(TARGET)
