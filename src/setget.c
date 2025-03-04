#include <setget.h>
#include <string.h>


// -------id-------
void set_emp_id ( struct _employee_ *emp, int id )
{
	emp->id = id;
}

int get_emp_id ( struct _employee_ *emp )
{
	return emp->id;
}


// -------name-------
void set_emp_name ( struct _employee_ *emp, const char *name )
{
	strncpy ( emp->name, name, sizeof ( emp->name ) - 1 );
	emp->name [ sizeof ( emp->name ) - 1 ] = '\0';
}

char* get_emp_name ( struct _employee_ *emp )
{
	return emp->name;
}


// -------age-------
void set_emp_age ( struct _employee_ *emp, int age )
{
	emp->age = age;
}

int get_emp_age ( struct _employee_ *emp )
{
	return emp->age;
}