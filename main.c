#include "include/c.h"
#include <stdio.h>
#include <string.h>
#include <unistd.h>
#include <fcntl.h>

int main ( int args, char *argv[] ) {
	
	/*Строка состоит из трёх частей: целого числа, строки в кавычках, вещественного числа разделённых табуляцией*/
	char buf [] [ 128 ] = {
		"20\t\"Hello\"\t70.5",
		"15\t\"World\"\t2.31"
	};


	int		i	= 0;
	char		buff [ 256 ];
	char		*cur;

	if ( args > 1 ) {
		int fd = open ( argv [ 1 ], O_RDONLY );
		buff [ read ( fd, buff, sizeof ( buff ) - 1 ) ] = '\0';

		cur = strtok ( buff, "\n\0" );
		while ( cur != NULL ) {
			printf("dg");
			strcpy ( (char*) buf [ i ], cur );
			cur = strtok ( NULL, "\n\0" );
			i++;
		}

		close ( fd );
	}

	struct _node_ list [] = {
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
	char 		(*arr) [ 128 ] 		= buf;
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
	
}
