#include "../include/c.h"
#include <stdio.h>


/******************************//*!
	\brief Функция добавления узла в список
	\param[in] 	list 	Указатель на начало структуры
	\param[in] 	add 	Указатель на узел
*/
void __add ( struct _node_ *list, struct  _node_ * add){
	while ( list->next != NULL ){
		list = list->next;
	}

	list->next = add;
}

/******************************//*!
	\brief Функция удаления узла из списка
	\param[in] 	list Указатель на начало структуры
*/
void __del ( struct _node_ *list ){
	struct _node_ *sv = list;

	while ( list->next != NULL ){
		sv = list;
		list = list->next;
	}

	sv->next = NULL;
}


/******************************//*!
	\brief Функция вывода значения узла
	\param[in] 	node Указатель на начало структуры
*/
void __print_new ( struct _node_ *node )
{
	node->func ( node->data );
}




/******************************//*!
	\brief Функция вывода значения нужного узла 
	\param[in] 	list 	Указатель на начало структуры
	\param[in] 	type 	Тип значения
	\param[in] 	name 	Указатель на массив указателей на функции
*/
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


/******************************//*!
	\brief Функция вывода значения типа char
	\param[in] 	ch Указаетль на char
*/
void print_char ( char *ch )
{
	printf ( "%c\n", *( ( char* ) ch ) );
}



/******************************//*!
	\brief Функция вывода значения типа int
	\param[in] 	i Указатель на int
*/
void print_int ( int *i )
{
	printf ( "%d\n", *( ( int* ) i ) );
}



/******************************//*!
	\brief Функция вывода значения типа long
	\param[in] 	ld Указатель на long
*/
void print_long ( long *ld )
{
	printf ( "%ld\n", *( ( long* ) ld ) );
}



/******************************//*!
	\brief Функция вывода значения типа float
	\param[in] 	fl Указатель на float
*/
void print_float ( float *fl )
{
	printf ( "%f\n", *( ( float* ) fl ) );
}

