CC = clang
CFLAGS = -Wall -Wextra -pedantic -g

all: convert

num_conversion.o: num_conversion.c
	$(CC) $(CFLAGS) -c num_conversion.c

main.o: main.c
	$(CC) $(CFLAGS) -c main.c

convert: main.o num_conversion.o
	$(CC) -o convert main.o num_conversion.o

clean:
	rm *.o convert
