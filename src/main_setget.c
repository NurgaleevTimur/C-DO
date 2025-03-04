#include <setget.h>


int main() 
{
	struct _employee_ employee;
  
	// Пример использования setters
	set_emp_id ( &employee, 101 );
	set_emp_name ( &employee, "Нургалеев Тимур" );
	set_emp_age ( &employee, 30 );
  
	// Пример использования getters
	printf ( "Employee ID: %d\n", get_emp_id ( &employee ) );
	printf ( "Employee Name: %s\n", get_emp_name ( &employee ) );
	printf ( "Employee Age: %d\n", get_emp_age ( &employee ) );
  
	return 0;
}



