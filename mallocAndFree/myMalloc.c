#include "myMalloc.h"

// This can be whatever you want, preferably large enough 
// to load your arrays into ;)
#define MEMSIZE 25000

struct MemEntry
{
	struct MemEntry *prev, *next;
	int isfree;		// 1 - yes, 0 - no
	int size;
};

// big block of memory space
static char memblock[MEMSIZE]; 
// size of memEntries
static const int entriesSize = MEMSIZE/sizeof(struct MemEntry)+1; 
// pointers to memEntries
static void *memEntries[MEMSIZE/sizeof(struct MemEntry)+1] = {0}; 

// return the first occurance of an index not containing a memEntry
static int getFreeIndex() {
	int i;
	for (i = 0; i < entriesSize; i++)
		if (memEntries[i] == 0) 
			return i;
	return 1; //should never reach here but 0 is always set as root
}

void* myMalloc(unsigned int size, char *file, int line){
    // Example of how to use the *file and line vars
    if (size == 0) {
		fprintf(stderr, "Unable to allocate 0 bytes in FILE: '%s' on LINE: '%d'\n", file, line);
		return 0;
	}
}

void myFree(void *p, char *file, int line){
    // Example of how to use the *file and line vars
    if (p == NULL) {
		fprintf(stderr, "Pointer is NULL in file, free failed in FILE: '%s' on LINE: '%d'\n", file, line);
		return;
	}
}