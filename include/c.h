/******************************//*!
 * \file
 * \brief	Функции для обработки строк
 * \author	Нургалеев Тимур
 * \date	Создан: 13.03.2025
 * \date	Изменён: 13.03.2025
 */


#ifndef C_H
#define C_H

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <stddef.h>


size_t str_len ( const char *str );

char *str_cpy ( char *destptr, const char *strptr);

char *str_dup ( const char *src );

char *str_cat ( char *s1, const char *s2 );

const char *str_pbrk ( const char *str1, const char *str2 );

int str_cmp ( const char *str1, const char *str2 );

char *str_chr ( const char *str, int c );

char *str_str ( const char *string, const char *substring );



//Директивы для совместимости С-кода с C++ компиляторами
#ifdef __cplusplus
extern "C" {
#endif


#ifdef __cplusplus
}
#endif

#endif /*  C_H  */