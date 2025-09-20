CC = gcc
CFLAGS = -Wall -Werror -std=c11

all: main

main: main.c
	$(CC) $(CFLAGS) main.c -o main

test: tests/test_student.c
	$(CC) $(CFLAGS) tests/test_student.c -o test
	./test
