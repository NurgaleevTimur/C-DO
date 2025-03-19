#include "include/c.h"
#include <stdio.h>


int main ( void ){
	struct __node1__ mas [ ] = {
		{ mas + 1, 1 },
		{ mas + 2, 2 },
		{ mas + 3, 3 },
		{ mas + 4, 4 },
		{ mas + 5, 5 },
		{ mas + 6, 6 },
		{ mas + 7, 7 },
		{ NULL	 , 8 }

	};
	
	struct __node1__ *node = mas;

	while ( node != NULL ){
		printf ( "%d\t", node->val );
		node = node->next;
	}
  
	printf ( "\n" );
}
