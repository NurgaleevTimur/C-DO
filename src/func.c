#include "../include/c.h"
#include <stdio.h>

//Односвязанный список
static void __add1 ( struct _node1_ *node, struct _node1_ *add )
{
	struct _node1_ *sv;

	sv = node->next;
	node->next = add;
	add->next = sv;


}

static void __del1 ( struct _node1_ *node )
{

	node->next = NULL;


}

static void __print1 ( struct _node1_ *node )
{
	while ( node != NULL ){
		printf ( "%d\t", node->val );
		node = node->next;
	}

	printf ( "\n" );
}




//Двусвязанный список
static void __add2 ( struct _node2_ *node, struct _node2_ *add )
{
	struct _node2_ *sv;

	sv = node->next;
	node->next = add;
	add->next = sv;

	add->prev = node;

}

static void __del2 ( struct _node2_ *node)
{
	struct _node2_ *prev = node->prev;
	

	prev->next = NULL;


}



static void __print2 ( struct _node2_ *node )
{
	while ( node != NULL ){
		printf ( "%d\t", node->val );
		node = node->next;
	}

	printf ( "\n" );
}




/*------------------ФУНКЦИИ УПРАВЛЯЮЩИХ НАДСТРОЕК-------------------*/

void __list_add1 ( struct _list1_ *list, struct _node1_ *add)
{
	__add1 ( list->tail, add );
	list->tail = add;
}

void __list_del1 ( struct _list1_ *list )
{
	struct _node1_ *sv = list->head;

	while ( sv->next != list->tail ){
		sv = sv->next;
	}
	__del1 ( sv );

	list->tail = sv;
}

void __list_print1 ( struct _list1_ *list )
{
	__print1 ( list->head );
}







void __list_add2 ( struct _list2_ *list, struct _node2_ *add )
{
	__add2 ( list->tail, add );
	list->tail = add;

}

void __list_del2 ( struct _list2_ *list )
{

	__del2 ( list->tail );

	list->tail = list->tail->prev;

}

void __list_print2 ( struct _list2_ *list )
{
	__print2 ( list->head );
}