#include "include/c.h"
#include <stdio.h>

int main ( void ) {
	char		c 	= 'a';
	int		i 	= 2004;
	long		l 	= 1971;
	float		f 	= 2001.1f;

	struct _node_ list [ ] = {
		{ NULL, (print_t) print_char, &c },
		{ NULL, (print_t) print_int, &i },
		{ NULL, (print_t) print_long, &l },
		{ NULL	  , (print_t) print_float, &f }
	};
	struct _node_ 	*sv	= list;

	__add ( list, list + 1 );
	__add ( list, list + 2 );
	__add ( list, list + 3 );

	__del ( list );

	__print_new ( list );

	print_t mas_ptr [ ] = { (print_t)print_char, (print_t)print_int, (print_t)print_long, (print_t)print_float };
	
	while ( sv != NULL ){
		printf ( "GOOD\n" );
		sv = sv->next;
	}


	print ( list, INT, mas_ptr );


	print_int ( list[1].data );


}
