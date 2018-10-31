COMPILER = gcc
CFLAGS = -Wall -g

ALL: search
.PHONY: clean

search: assignment.c
	$(COMPILER) $(CFLAGS) -o search assignment.c
	
clean:
	rm -f search