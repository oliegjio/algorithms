PROG_NAME = algorithms
CC = gcc

run: compile
	./$(PROG_NAME)

compile: main.o bubblesort.o
	$(CC) main.o bubblesort.o -o $(PROG_NAME)

clean:
	rm *.o $(PROG_NAME)

main.o: main.c
	$(CC) -c main.c

bubblesort.o: bubblesort.c
	$(CC) -c bubblesort.c