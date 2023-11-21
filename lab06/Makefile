# Makefile

CC = clang
C_OPTS = -std=gnu11 -g -Wall

all: dist/main

dist/main: sqr/main.c | dist
	$(CC) $(C_OPTS) $< -o $@

run: all
	./dist/main

dist:
	mkdir -p dist

clean:
	rm -rf dist

