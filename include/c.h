/******************************//*!
 * \file
 * \brief	Функции для работы со списками
 * \author	Нургалеев Тимур
 * \date	Создан: 19.03.2025
 * \date	Изменён: 19.03.2025
 */

#ifndef C_H
#define C_H



struct __node1__ {
	struct __node1__ *next;
	int val;
};


/*struct __node2__ {
	struct __node2__ *next;
	int val;
};*/


void __add1 ( struct __node1__ *node, struct __node1__ *add );

void __del1 ( struct __node1__ *node );

void __print1 ( struct __node1__ *node );


//void __add2 ( struct __node2__ *node, struct __node2__ *add );

//void __del2 ( struct __node2__ *node );

//void __print2 ( struct __node2__ *node );



/*Директивы для совместимости С-кода с C++ компиляторами*/
#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
}
#endif

#endif /* C_H */

