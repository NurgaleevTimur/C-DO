/******************************//*!
 * \file
 * \brief	Описание
 * \author
 * \date	Создан: 16.01.2025
 * \date	Изменён: 16.01.2025
 */

#ifndef C_H
#define C_H

#include <stdio.h>
#include <stddef.h>

//Создание псевдонимов
typedef enum{
	CHAR_TYPE,
	SHORT_TYPE,
	INT_TYPE,
	LONG_TYPE,
	FLOAT_TYPE,
	DOUBLE_TYPE,
	U_INT_TYPE,
	U_CHAR_TYPE
} DataType;

//Создание прототипа функции
void print_array_elements(void*, size_t, DataType);

//Директивы для совместимости С-кода с C++ компиляторами
#ifdef __cplusplus
extern "C" {
#endif


#ifdef __cplusplus
}
#endif

#endif /*  C_H  */
