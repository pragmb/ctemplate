#include <stdlib.h>
#include <stdio.h>

#include "ctemplate.h"

#if !(defined TYPE1 && defined TYPE2)
#error TYPE1 and TYPE2 must be defined before including pair.h
#endif

#define pair TEMPLATE_1_2(pair)

typedef struct
{
	TYPE1* t1;
	TYPE2* t2;
} pair;

pair*
TEMPLATE_1_2(make_pair) (TYPE1* t1, TYPE2* t2)
#ifdef PAIR_CPP
{
	printf("%s\n", ECHO(TEMPLATE_1_2(make_pair)));
	pair* p = (pair*)  malloc(sizeof(pair));
	p -> t1 = t1;
	p -> t2 = t2;
	return p;
}
#else
;
#endif

void
TEMPLATE_1_2(free_pair) (pair* p)
#ifdef PAIR_CPP
{
	TEMPLATE_1(free) (p -> t1);
	TEMPLATE_2(free) (p -> t2);
	printf("%s\n", ECHO(TEMPLATE_1_2(free_pair)));
	free(p);
}
#else
;
#endif

#undef pair
