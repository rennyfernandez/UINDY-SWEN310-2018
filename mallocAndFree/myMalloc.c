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
    static int initialized = 0;
	struct MemEntry *p;
	struct MemEntry *next;
	static struct MemEntry *root;
	
	// Example of how to use the *file and line vars
	if (size == 0) {
		fprintf(stderr, "Unable to allocate 0 bytes in FILE: '%s' on LINE: '%d'\n", file, line);
		return 0;
	}

    // 1st time called
	if(!initialized)	
	{
		// create a root chunk at the beginning of the memory block
		root = (struct MemEntry*) memblock;
		root->prev = root->next = 0;
		root->size = MEMSIZE - sizeof(struct MemEntry);
		root->isfree = 1;
		initialized = 1;
		memEntries[getFreeIndex()] = memblock;
	}
}

void myFree(void *p, char *file, int line){
    // Example of how to use the *file and line vars
    if (p == NULL) {
		fprintf(stderr, "Pointer is NULL in file, free failed in FILE: '%s' on LINE: '%d'\n", file, line);
		return;
	}
}