/************************//*!
 * \file
 * \brief	Функции для форматирования строк
 * \author	Нургалеев Тимур
 * \date 	Изменён 26.03.25
 * \date 	Изменён 26.03.25
*/


#ifndef C_H
#define C_H


#ifdef __cplusplus
extern "C" {
#endif


struct _node_ {
	struct _node_ *next;
	int i;
	char str [ 128 ];
	float fl;
};

void __int ( char *, struct _node_ * );

void __str ( char *, struct _node_ * );

void __fl ( char *, struct _node_ * );

typedef void ( *f_t ) ( char *, struct _node_ * );

struct _func_ {
	struct _func_ *next;
	f_t func;
};


#ifdef __cplusplus
}
#endif

#endif /* C_H */