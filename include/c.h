/******************************//*!
 * \file
 * \brief	Функции для работы со списками
 * \author	Нургалеев Тимур
 * \date	Создан: 21.03.2025
 * \date	Изменён: 21.03.2025
 */


 #ifndef C_H
 #define C_H




 /*Директивы для соместимости С-кода с С++ компиляторами*/
 #ifdef __cplusplus
 extern "C" {
#endif

struct _node_ {
	struct _node_ *next;
	void *data;
};

enum type {
	CHAR,
	INT,
	LONG,
	FLOAT
};
typedef void ( *print_t ) ( void * );

void print ( struct _node_ *, enum type, print_t [] );

void print_char ( char * );
void print_int ( int * );
void print_long ( long * );
void print_float ( float * );


#ifdef __cplusplus
}
#endif

#endif /* C_H */