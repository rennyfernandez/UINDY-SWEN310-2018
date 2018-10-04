#ifndef _mymalloc_h_
#define _mymalloc_h_

#include <stdlib.h>
#include <stdio.h>

#define malloc( x ) myMalloc( x , __FILE__ , __LINE__ )
#define free( x ) myFree( x , __FILE__ , __LINE__ )


void *myMalloc(unsigned int size, char *file, int line);
void myFree(void *p, char *file, int line);

#endif
