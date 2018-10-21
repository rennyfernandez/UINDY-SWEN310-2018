COMPILER = gcc
CFLAGS = -Wall -g
CFLAGS2 = -g

ALL: myEncoders
.PHONY: all
.PHONY: clean
.PHONY: caesar
.PHONY: exclusiveOr

myEncoders.o: myEncoders.c myEncoders.h
	$(COMPILER) $(CFLAGS) -c myEncoders.c

main.o: main.c myEncoders.h
	$(COMPILER) $(CFLAGS2) -c main.c
	
myEncoders: myEncoders.o main.o
	$(COMPILER) $(CFLAGS) -o myEncoders main.o myEncoders.o
	
caesar.o: caesar.c myEncoders.h
	$(COMPILER) $(CFLAGS2) -c caesar.c

caesar: caesar.o myEncoders.o
	$(COMPILER) $(CFLAGS) -o caesar caesar.o myEncoders.o
	
exclusiveOr.o: exclusiveOr.c myEncoders.h
	$(COMPILER) $(CFLAGS2) -c exclusiveOr.c
	
exclusiveOr: exclusiveOr.o myEncoders.o
	$(COMPILER) $(CFLAGS) -o exclusiveOr exclusiveOr.o myEncoders.o
	
clean:
	rm -f en* *.o myEncoders caesar exclusiveOr
	