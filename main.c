#include "include/c.h"
#include <stdio.h>
#include <string.h>
#include <stdlib.h>



int main ( void )
{

	/*Строка состоит из трёх частей: целого числа, строки в кавычках, вещественного числа разделённых табуляцией*/
	char mas [] [ 128 ] = {
		"12\t\"Hello\"\t1.56",
		"15\t\"World\"\t2.31"
	};

	
	struct _node_ list [ ] = {
		{ .next = list + 1 },
		{ .next = NULL	   }
	};

	struct _func_ func [] = { 
		{ func + 1, __int },
		{ func + 2, __str },
		{ NULL, __fl }

	};

	struct _func_ 	*f_node			= func;
	struct _node_ 	*current		= list;
	char 		(*arr) [ 128 ] 		= mas;
	char		*ch;


	while ( current != NULL ) {

		ch = ( char* ) arr;

		while ( f_node != NULL ){
			f_node->func( ch, current );
			f_node = f_node->next;
		}

		arr++;
		f_node = func;
		current = current->next;
	}

	current		= list;
	while ( current != NULL ) {
		printf( "\n%d, %s, %f\n",  current->i, current->str, current->fl ) ;
		current = current->next;
	}
	
	

	return 0;
}