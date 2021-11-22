CC=gcc
AR=ar
FLAGS= -Wall -g

#so -dinami a-stati
all: connections

#create main
connections: main.o my_mat.a
	$(CC) $(FLAGS) -o connections main.o my_mat.a

main.o: main.c my_mat.h
	$(CC) $(FLAGS) -c main.c

my_mat.a: my_mat.o
	$(AR) -rcs my_mat.a my_mat.o

my_mat.o: my_mat.c my_mat.h
	$(CC) $(FLAGS) -c my_mat.c

.PHONY: clean all
clean:
	rm -f *.o *.a connections
