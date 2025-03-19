/******************************//*!
 * \file
 * \brief	Функции для работы со списками
 * \author	Нургалеев Тимур
 * \date	Создан: 19.03.2025
 * \date	Изменён: 19.03.2025
 */

#ifndef C_H
#define C_H


/*Директивы для совместимости С-кода с C++ компиляторами*/
#ifdef __cplusplus
extern "C" {
#endif


struct _node1_ {
	struct _node1_ *next;
	int val;
};


struct _node2_ {
	struct _node2_ *next;
	struct _node2_ *prev;
	int val;
};


void __add1 ( struct _node1_ *, struct _node1_ * );

void __del1 ( struct _node1_ * );

void __print1 ( struct _node1_ * );


void __add2 ( struct _node2_ *, struct _node2_ * );

void __del2 ( struct _node2_ * );

void __print2 ( struct _node2_ * );



#ifdef __cplusplus
}
#endif

#endif /* C_H */

