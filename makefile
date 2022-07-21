CC = gcc
CFLAGS = -Wall -std=c17

src_files = linked_list.c main.c
target = main

main:
	$(CC) $(CFLAGS) -g $(src_files) -o $(target)

clean:
	rm -f $(target)
