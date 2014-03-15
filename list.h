#include <stdlib.h>
#include <stdio.h>

#include "ctemplate.h"

#if !(defined TYPE)
#error TYPE must be defined before including list.h
#endif

#define node TEMPLATE(node)
#define list TEMPLATE(list)

typedef struct node
{
	TYPE* value;
	struct node* next;
} node;

typedef struct
{
	node* head;
} list;

list*
TEMPLATE(make_list) (void)
#ifdef LIST_C
{
	printf("%s\n", ECHO(TEMPLATE(make_list)));
	list* l = malloc(sizeof(list));
	l -> head = NULL;
	return l;
}
#else
;
#endif

void
TEMPLATE(free_list) (list* l)
#ifdef LIST_C
{
	while(l -> head)
	{
		TEMPLATE(free) (l -> head -> value);
		TYPE* next = l -> head -> next;
		free(l -> head);
		l -> head = next;
	}
	printf("%s\n", ECHO(TEMPLATE(free_list)));
	free(l);
}
#else
;
#endif

int
TEMPLATE(pop) (list* l, TYPE** t)
#ifdef LIST_C
{
	if(t == NULL)
	{
		return 2;
	}

	if(l == NULL || l -> head == NULL)
	{
		*t = NULL;
		return 1;
	}

	*t = l -> head -> value;
	l -> head = l -> head -> next;

	return 0;
}
#else
;
#endif

#undef list
#undef node
