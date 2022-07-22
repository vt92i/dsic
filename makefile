CC = gcc
CFLAGS = -Wall -Wextra -std=c17 -g

header_files = $(wildcard *.h)
src_files = $(wildcard *.c)
output = dsic

all: dsic

dsic: $(header_files) $(src_files)
	$(CC) $(CFLAGS) $(src_files) -o $(output)

clean:
	rm -f $(output)
