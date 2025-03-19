#include "include/c.h"
#include <stdio.h>

int main ( void ){

	struct __node1__ mas [ 8 ];

	struct __node1__ node1 = { NULL, 1 };
	struct __node1__ node2 = { NULL, 2 };
	struct __node1__ node3 = { NULL, 3 };
	struct __node1__ node4 = { NULL, 4 };
	

	__add1 ( mas, &node1 );
	__add1 ( &node1, &node2 );
	__add1 ( &node1, &node3 );
	__add1 ( &node3, &node4 );

	//1 3 4 2
	__print1 ( &node1 );

	//Должен удалиться 4 узел, то есть node2
	__del1 ( &node4 );

	//1 3 4
	__print1 ( &node1 );

}

