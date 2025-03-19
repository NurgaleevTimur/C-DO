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

struct _list1_ {
	struct _node1_ *head;
	struct _node1_ *tail;
};

struct _list2_ {
	struct _node2_ *head;
	struct _node2_ *tail;
};



void __list_add1 ( struct _list1_ *, struct _node1_ * );

void __list_del1 ( struct _list1_ * );

void __list_print1 ( struct _list1_ * );


void __list_add2 ( struct _list2_ *, struct _node2_ * );

void __list_del2 ( struct _list2_ * );

void __list_print2 ( struct _list2_ * );



#ifdef __cplusplus
}
#endif

#endif /* C_H */

