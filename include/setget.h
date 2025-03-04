/******************************//*!
 * \file
 * \brief	Запись и чтение данных
 * \author      Нургаллев Тимур
 * \date	Создан: 04.03.2025
 * \date	Изменён: 04.03.2025
 */

 #ifndef C_H
 #define C_H
 
 #include <stdio.h>
 


 struct _employee_
 {
         int id;
         char name[50];
         int age;
 };
 
 // -------id-------
 void set_emp_id ( struct _employee_ *emp, int id );
 
 int get_emp_id ( struct _employee_ *emp );
 
 // -------name-------
 void set_emp_name ( struct _employee_ *emp, const char *name );
 
 char* get_emp_name ( struct _employee_ *emp );
 
 
 // -------age-------
 void set_emp_age ( struct _employee_ *emp, int age );
 
 int get_emp_age ( struct _employee_ *emp );



 //Директивы для совместимости С-кода с C++ компиляторами
 #ifdef __cplusplus
 extern "C" {
 #endif
 
 
 #ifdef __cplusplus
 }
 #endif
 
 #endif /*  C_H  */