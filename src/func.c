#include "../include/c.h"
#include <stdio.h>


void __add1 ( struct __node1__ *node, struct __node1__ *add )
{
	struct __node1__ *sv;

	sv = node->next;
	node->next = add;
	add->next = sv;
}

void __del1 ( struct __node1__ *node )
{
	struct __node1__ *sv;

	sv = node;
	node = node->next;
	sv->next = node->next;

}

void __print1 ( struct __node1__ *node )
{
	while ( node != NULL ){
		printf ( "%d\t", node->val );
		node = node->next;
	}

	printf ( "\n" );
}



