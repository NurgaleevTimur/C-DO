#include "../include/c.h"
#include <stdio.h>


void print ( struct _node_ *list, enum type type )
{
	switch ( type ) {
		case CHAR:
			printf ( "char var -> %c\n", (*(char*) list[ 0 ].data) );
			break;
		case INT:
			printf ( "int var -> %d\n", *((int*) list[ 1 ].data) );
			break;
		case LONG:
			printf ( "long var -> %ld\n", *((long*) list[ 2 ].data));
			break;
		case FLOAT:
			printf ( "float var -> %f\n", *((float*) list[ 3 ].data) );
			break;
	}
}