#include "include/c.h"
#include <stdio.h>

int main ( void ){
	struct _node2_ node [  ] = {
		{ node + 1, NULL	, 1 },
		{ node + 2, node	, 2 },
		{ node + 3, node + 1	, 3 },
		{ node + 4, node + 2	, 4 },
		{ node + 5, node + 3	, 5 },
		{ node + 6, node + 4	, 6 },
		{ node + 7, node + 5	, 7 },
		{ NULL	  , node + 6	, 8 }
	};
	
	struct _node2_ *current = node;

	while ( current != NULL ){
		printf ( "%d\t", current->val );
		current = current->next;
	}
  
	printf ( "\n" );

}


