COMPILER = gcc
CFLAGS = -Wall -g
CFLAGS2 = -g

ALL: myMalloc
.PHONY: all
.PHONY: clean

myMalloc.o: myMalloc.c myMalloc.h
	$(COMPILER) $(CFLAGS) -c myMalloc.c

main.o: main.c myMalloc.h
	$(COMPILER) $(CFLAGS2) -c main.c
	
myMalloc: myMalloc.o main.o
	$(COMPILER) $(CFLAGS) -o myMalloc main.o myMalloc.o

	
clean:
	rm -f *.o myMalloc
	

