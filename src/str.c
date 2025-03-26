#include "../include/c.h"
#include <string.h>
#include <stdlib.h>

/******************************//*!
	\brief Функция заполнения int-части узла
	\param[in] 	arr 		Указатель на форматируемую строку
	\param[in] 	current 	Указатель на кортеж
*/
void __int ( char *arr, struct _node_ *current ) {
	current->i =  atoi ( strtok ( arr, "\t" ) );

}

/******************************//*!
	\brief Функция заполнения str-части узла
	\param[in] 	list 		Указатель на форматируемую строку
	\param[in] 	current 	Указатель на кортеж
*/
void __str ( char *arr, struct _node_ *current ) {
	strcpy ( current->str,( char* )strtok ( NULL, "\t\"" ) );
}

/******************************//*!
	\brief Функция заполнения float-части узла
	\param[in] 	list 		Указатель на форматирумую строку
	\param[in] 	current 	Указатель на кортеж
*/
void __fl ( char *arr, struct _node_ *current ) {
	current->fl = atof ( strtok ( NULL, "\t" ) );
}