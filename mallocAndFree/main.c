#include "myMalloc.h"
#include <stdio.h>
#include <stdlib.h>

#define SIZE 10

void task1();
void task2malloc();
void task2myMalloc();
unsigned int randSeed(int* seed);

int main(int argc, char *argv[])
{
	 char *array;
	 int i;

	 array = testMalloc(10);
	 if(array == NULL){
	 	fprintf(stderr,"call to malloc() failed\n");
	 	fflush(stderr);
	 	exit(1);
	 }

	 for(i=0; i < 9; i++){
	 	array[i] = 'a' + i%26;
	 }
	 array[9] = 0;

	 printf("here is my nifty new string: %s\n",array);

	 testFree(array);

	return(0);
}


unsigned int randSeed(int* seed){
  unsigned int hi, lo;
  lo = 16807 * ((*seed) & 0xFFFF);
  hi = 16807 * ((*seed) >> 16);

  lo += (hi & 0x7FFF) << 16;
  lo += (hi >> 15);

  if (lo > 0x7FFFFFFF) lo -= 0x7FFFFFFF;

  return ((*seed) = (unsigned int) lo);
}
