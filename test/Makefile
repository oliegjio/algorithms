PROG_NAME = test
CC = gcc
CC_FLAGS = -Wall -Wextra -pedantic -lcunit

run: compile
	./$(PROG_NAME)

compile: objects
	$(CC) $(CC_FLAGS) *.o ../*.so -o $(PROG_NAME)

clean:
	rm *.o $(PROG_NAME)

objects: main.o test_bubblesort.o test_insertion_sort.o

main.o: main.c
	$(CC) $(CC_FLAGS) -c main.c

test_bubblesort.o: test_bubblesort.c
	$(CC) $(CC_FLAGS) -c test_bubblesort.c

test_insertion_sort.o: test_insertion_sort.c
	$(CC) $(CC_FLAGS) -c test_insertion_sort.c
