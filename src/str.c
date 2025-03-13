#include "../include/c.h"





/*****************************//*!
	\brief Подсчёт количества символов в строке
	\param[in]	str 	Указатель на строку
	\return		char 	Количество символов в строке
*/
size_t str_len ( const char *str )
{
        size_t i = 0;
	
        while ( *str != '\0') {
		str++;
		i++;
	}

        return i;
}





/*****************************//*!
	\brief Копирует строку в указанный адрес
	\param[in]		strptr 	Указатель на копируемую строку
	\param[out]		destptr Указатель на адрес копирования
	\return			char 	Указатель на адрес копирования
*/
char *str_cpy ( char *destptr, const char *strptr)
{
	char *rc = destptr;

	while ( *strptr != '\0' ){
		*destptr = *strptr;
		destptr++;
		strptr++;
	}

	*destptr = '\0';

	return rc;
}






/*****************************//*!
	\brief Дублирует строку
	\param[in]		str 	Указатель на дублируемую строку
	\return			char 	Указатель на адрес дубликата строки
*/
char *str_dup ( const char *src )
{
	char    *destptr        = ( char * ) malloc ( strlen ( src ) );
	char    *rc             = destptr;
	
	
	while ( *src != '\0' ){
		*destptr = *src;
		destptr++;
		src++;
	}

	*destptr = '\0';

	return rc;
}








/***************************//*!
	\brief Конкатенация строк
	\param[out]	s1	Указатель на строку которую конкатенируем
	\param[in]	s2 	Указаетель на строку с которой необходимо сконкатенировать s1
	\return		char	Указатель на начало сконкатенированной строки
*/
char *str_cat ( char *s1, const char *s2 )
{
	char    *sv     = s1;
        s1              += strlen ( s1 );

        while ( *s2 != '\0' ){
                *s1 = *s2;
                s1++;
                s2++;
        }
	
	*s1 = '\0';

        return sv;
}






/******************************//*!
	\brief Поиск первого вхождения одного символа из множества символов в строке поиска
	\param[in]	str1 Указатель на строку поиска
	\param[in]	str2 Указатель на множество символов 
	\return		char Указатель на первое вхождение
*/
const char *str_pbrk ( const char *str1, const char *str2 )
{
	const char *sv = str2;

	while ( *str1 != '\0' ){
		while ( *str2 != '\0' ){
			if ( *str1 == *str2 ){
				break;
			}

			str2++;
		}

		if ( *str1 == *str2 ){
			break;
		}

		str2 = sv;
		str1++;
		
	}
	
	return str1;
}





/******************************//*!
	\brief Проверка на равенство строк
	\param[in]	str1 	Указатель на первую строку
	\param[in]	str2 	Указатель на вторую строку 
	\return		int  	Разница по ASCI-таблице между первыми неравными символами
*/
int str_cmp ( const char * str1, const char* str2 ){
	int num = 0;

	while ( 1 ){
		if ( *str1 != *str2 || *str1 == '\0' ){
			num = *str1 - *str2;
			break;
		}

		str1++;
		str2++;
	}

	return num;
}







/******************************//*!
	\brief Поиск первого вхождения одного символа в строке поиска
	\param[in]	c 	Код символа по ASCI-таблице
	\param[in]	str 	Указатель на строку поиска
	\return		char 	Указатель на первое вхождение
*/
char *str_chr ( const char *str, int c )
{
	char	*return_ = NULL;

	c = ( char ) c;

	while ( *str != '\0' ){
		if ( *str == c ){
			return_ = ( char* ) str;
			break;
		}

		str++;
	}

	return return_;
}








/******************************//*!
	\brief Поиск первого вхождения подстроки в строке поиска
	\param[in]	string 		Указатель на строку поиска
	\param[in]	substring 	Указатель на подстроку
	\return		char 	Указатель на первое вхождение
*/
char *str_str ( const char *string, const char *substring )
{
	int	len	= strlen ( substring );
	char	*save	= ( char* ) substring;
	int	 flag	= 0;
	char	*str	= NULL;

	if ( strlen ( string ) >= strlen ( substring ) ){
		while ( *string != '\0' ){
			str = ( char* ) string;
			while ( *substring != '\0' ){
				if ( *string == *substring ){
					string++;
					flag++;
				} else break;
				substring++;
			}
			if ( flag == len ){
				break;
			}
			substring = save;
			string++;
		}
	}

	return str;
}