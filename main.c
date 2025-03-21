#include "include/c.h"
#include <stdio.h>

int main ( void ) {
	char		c 	= 'a';
	int		i 	= 2004;
	long		l 	= 1971;
	float		f 	= 2001.1f;
	enum type 	type 	= LONG;

	struct _node_ list [ ] = {
		{ list + 1, &c },
		{ list + 2, &i },
		{ list + 3, &l },
		{ NULL	  , &f }
	};

	
	struct _node_ *sv = list;
	while ( sv != NULL ){
		printf ( "GOOD\n" );
		sv = sv->next;
	}


	print ( list, type );

}
