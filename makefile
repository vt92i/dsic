CC = gcc
CFLAGS = -Wall -std=c17

src_files = hello.c main.c
target = main

main:
	$(CC) $(CFLAGS) $(src_files) -o $(target)

clean:
	rm -f $(target)
