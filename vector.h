#include <stdlib.h>
#include <stdio.h>

#include "ctemplate.h"

#if !(defined TYPE)
#error TYPE must be defined before including vector.h
#endif

#define vector TEMPLATE(vector)

typedef struct
{
	TYPE* t;
} vector;

vector*
TEMPLATE(make_vector) (size_t size)
#ifdef VECTOR_C
{
	printf("%s\n", ECHO(TEMPLATE(make_vector)));
	vector* v = malloc(sizeof(vector));
	v -> t = TEMPLATE(make) (size);
	return v;
}
#else
;
#endif

void
TEMPLATE(free_vector) (vector* v)
#ifdef VECTOR_C
{
	TEMPLATE(free) (v -> t);
	printf("%s\n", ECHO(TEMPLATE(free_vector)));
	free(v);
}
#else
;
#endif

#undef vector
