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

//Создание прототипов функций ввода/вывода
void output_value(void* arr, const char* ar_type);
void input_value(void* arr, const char* ar_type);
//Директивы для совместимости С-кода с C++ компиляторами
#ifdef __cplusplus
extern "C" {
#endif


#ifdef __cplusplus
}
#endif

#endif /*  C_H  */