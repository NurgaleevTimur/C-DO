#include "include/c.h"
#include <stdio.h>


void __print_rev ( struct _node2_ * );



int main ( void ){
	struct _node1_ node1 [  ] = {
		{ NULL, 1 },
		{ NULL, 2 },
		{ NULL, 3 },
		{ NULL, 4 },
		{ NULL, 5 },
		{ NULL, 6 },
		{ NULL, 7 },
		{ NULL, 8 }
	};

	struct _node2_ node2 [  ] = {
		{ NULL, NULL, 9 },
		{ NULL,	NULL, 10 },
		{ NULL,	NULL, 11 },
		{ NULL,	NULL, 12 },
		{ NULL,	NULL, 13 },
		{ NULL,	NULL, 14 },
		{ NULL,	NULL, 15 },
		{ NULL, NULL, 16 }
	};

	__add1 ( node1, node1 + 1 );
	__add1 ( node1 + 1, node1 + 2 );
	__add1 ( node1 + 2, node1 + 3 );
	__add1 ( node1 + 3, node1 + 4 );
	__add1 ( node1 + 4, node1 + 5 );
	__add1 ( node1 + 5, node1 + 6 );
	__add1 ( node1 + 6, node1 + 7 );

	__add2 ( node2, node2 + 1 );
	__add2 ( node2 + 1, node2 + 2 );
	__add2 ( node2 + 2, node2 + 3 );
	__add2 ( node2 + 3, node2 + 4 );
	__add2 ( node2 + 4, node2 + 5 );
	__add2 ( node2 + 5, node2 + 6 );
	__add2 ( node2 + 6, node2 + 7 );

	/*
	1	2	3	4	5	6	7	8
	9	10	11	12	13	14	15	16
	*/
	__print1 ( node1 );
	__print2 ( node2 );

	__print_rev ( node2 + 7 );

	return 0;
}


void __print_rev ( struct _node2_ *node )
{

	while ( node != NULL ){
		printf ( "%d\t", node->val );
		node = node->prev;
	}
	
	printf ( "\n" );
}


