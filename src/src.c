#include "../include/c.h"
#include <stdio.h>

void print ( struct _node_ *list, enum type type, print_t name [] )
{
	switch ( type ) {
		case CHAR:
			name[0] ( (char*) list[ 0 ].data );
			break;
		case INT:
			name[1] ( (char*) list[ 1 ].data );
			break;
		case LONG:
			name[2] ( (char*) list[ 2 ].data );
			break;
		case FLOAT:
			name[3] ( (char*) list[ 3 ].data );
			break;
	}
}


void print_char ( char *ch )
{
	printf ( "%c\n", *( ( char* ) ch ) );
}

void print_int ( int *i )
{
	printf ( "%d\n", *( ( int* ) i ) );
}


void print_long ( long *ld )
{
	printf ( "%ld\n", *( ( long* ) ld ) );
}


void print_float ( float *fl )
{
	printf ( "%f\n", *( ( float* ) fl ) );
}
