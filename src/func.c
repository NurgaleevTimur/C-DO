#include "../include/c.h"
#include <stdio.h>


void __add1 ( struct _node1_ *node, struct _node1_ *add )
{
	struct _node1_ *sv;

	sv = node->next;
	node->next = add;
	add->next = sv;
}

void __del1 ( struct _node1_ *node )
{
	struct _node1_ *sv;

	sv = node;
	node = node->next;
	sv->next = node->next;

}

void __print1 ( struct _node1_ *node )
{
	while ( node != NULL ){
		printf ( "%d\t", node->val );
		node = node->next;
	}

	printf ( "\n" );
}



