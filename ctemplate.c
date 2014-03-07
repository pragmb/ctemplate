#include <stdlib.h>
#include <stdio.h>

#include "ctemplate.h"

int* make_int(size_t size)
{
	printf("%s\n", ECHO(make_int));
	return (int*) malloc(size * sizeof(int));
}

void free_int(int* i)
{
	printf("%s\n", ECHO(free_int));
	free(i);
}

float* make_float(size_t size)
{
	printf("%s\n", ECHO(make_float));
	return (float*) malloc(size * sizeof(float));
}

void free_float(float* f)
{
	printf("%s\n", ECHO(free_float));
	free(f);
}
