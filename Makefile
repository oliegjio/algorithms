PROG_NAME = algorithms
CC = gcc
CC_FLAGS = -Wall -Wextra -pedantic

run: compile
	./$(PROG_NAME)

compile: objects shared
	$(CC) $(CC_FLAGS) *.o -o $(PROG_NAME)

shared: objects
	$(CC) $(CC_FLAGS) *.o -shared -o $(PROG_NAME).so

clean:
	rm *.o $(PROG_NAME) $(PROG_NAME).so

objects: main.o bubblesort.o insertion_sort.o

main.o: main.c
	$(CC) $(CC_FLAGS) -c main.c

bubblesort.o: bubblesort.c
	$(CC) $(CC_FLAGS) -c bubblesort.c

insertion_sort.o: insertion_sort.c
	$(CC) $(CC_FLAGS) -c insertion_sort.c
