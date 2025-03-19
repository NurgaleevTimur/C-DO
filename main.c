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

	struct _list1_  list1 [ ] = {
		{ .head = node1, .tail = node1 }
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

	struct _list2_  list2 [ ] = {
		{ node2, node2 }
	};



	__list_add1 ( list1, node1 + 1 );
	__list_add1 ( list1, node1 + 2 );
	__list_add1 ( list1, node1 + 3 );
	__list_add1 ( list1, node1 + 4 );
	__list_add1 ( list1, node1 + 5 );
	__list_add1 ( list1, node1 + 6 );
	__list_add1 ( list1, node1 + 7 );
	
	__list_add2 ( list2, node2 + 1 );
	__list_add2 ( list2, node2 + 2 );
	__list_add2 ( list2, node2 + 3 );
	__list_add2 ( list2, node2 + 4 );
	__list_add2 ( list2, node2 + 5 );
	__list_add2 ( list2, node2 + 6 );
	__list_add2 ( list2, node2 + 7 );

	/*
	1	2	3	4	5	6	7	8
	9	10	11	12	13	14	15	16
	*/
	__list_print1 ( list1 );
	__list_print2 ( list2 );

	__list_del1 ( list1 );
	__list_del2 ( list2 );


	/*
	1	3	4	5	6	7	8
	9	11	12	13	14	15	16
	*/
	__list_print1 ( list1 );
	__list_print2 ( list2 );

	return 0;
}



