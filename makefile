CC=gcc
CFLAGS= -Wall -I.
all: main.o
	$(CC) -o storage_classes main.o $(CFLAGS)
