#include "include/c.h"
#include <stdio.h>

int main ( void ) {
	char		c 	= 'a';
	int		i 	= 2004;
	long		l 	= 1971;
	float		f 	= 2001.1f;

	struct _node_ list [ ] = {
		{ list + 1, &c },
		{ list + 2, &i },
		{ list + 3, &l },
		{ NULL	  , &f }
	};

	print_t mas_ptr [ ] = { (print_t)print_char, (print_t)print_int, (print_t)print_long, (print_t)print_float };
	
	struct _node_ *sv = list;
	while ( sv != NULL ){
		printf ( "GOOD\n" );
		sv = sv->next;
	}


	print ( list, INT, mas_ptr );


	print_int ( list[1].data );
}
