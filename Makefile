CC=gcc
FLAGS=-lm
FLAGS+=-I .

test: logfloat.o
	$(CC) $(FLAGS) logfloat.o test.c -o test

logfloat.o: logfloat.c logfloat.h
	$(CC) $(FLAGS) -c logfloat.c

clean:
	rm -f *.o
