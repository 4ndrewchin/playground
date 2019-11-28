CC = clang
CFLAGS = -Wall -Wextra -pedantic -g

all: nconvert

num_conversion.o: num_conversion.c
	$(CC) $(CFLAGS) -c num_conversion.c

main.o: main.c
	$(CC) $(CFLAGS) -c main.c

nconvert: main.o num_conversion.o
	$(CC) -o nconvert main.o num_conversion.o

clean:
	rm *.o nconvert
