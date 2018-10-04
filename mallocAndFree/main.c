#include "myMalloc.h"
#include <stdio.h>

int main(int argc, char *argv[])
{
	char *array;
	int i;

	array = malloc(10);
	if(array == NULL)
	{
		fprintf(stderr,"call to malloc() failed\n");
		fflush(stderr);
		exit(1);
	}

	for(i=0; i < 9; i++)
	{
		array[i] = 'a' + i%26;
	}
	array[9] = 0;

	printf("here is my nifty new string: %s\n",array);

	free(array);

	return(0);
}
