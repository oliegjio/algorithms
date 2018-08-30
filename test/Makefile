PROG_NAME = test
CC = gcc
CC_FLAGS = -l cunit

run: compile
	./$(PROG_NAME)

compile: main.o test_bubblesort.o
	$(CC) main.o test_bubblesort.o $(CC_FLAGS) -o $(PROG_NAME)

clean:
	rm *.o $(PROG_NAME)

main.o: main.c
	$(CC) -c main.c

test_bubblesort.o: test_bubblesort.c
	$(CC) -c test_bubblesort.c