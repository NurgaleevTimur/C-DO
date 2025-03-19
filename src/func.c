#include "../include/c.h"
#include <stdio.h>

//Односвязанный список
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

	sv = node->next;
	node->next = sv->next;


}

void __print1 ( struct _node1_ *node )
{
	while ( node != NULL ){
		printf ( "%d\t", node->val );
		node = node->next;
	}

	printf ( "\n" );
}




//Двусвязанный список
void __add2 ( struct _node2_ *node, struct _node2_ *add )
{
	struct _node2_ *sv;
	
	//next
	sv = node->next;
	node->next = add;
	add->next = sv;

	//prev
	if ( sv != NULL ){
		sv->prev = add;
	}
	add->prev = node;

}

void __del2 ( struct _node2_ *node)
{
	struct _node2_ *sv;
	
	//next
	sv = node->next;
	node->next = sv->next;

	//prev
	sv = sv->next;
	sv->prev = node;


}



void __print2 ( struct _node2_ *node )
{
	while ( node != NULL ){
		printf ( "%d\t", node->val );
		node = node->next;
	}

	printf ( "\n" );
}


