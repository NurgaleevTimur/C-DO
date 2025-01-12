#include<stdio.h>

int main(){

	//------ 1 ------
	//Объявление структуры из 9 полей
	struct s_truct
	{
		char char_field;
		short short_field;
		int int_field;
		long long_field;
		float float_field;
		double double_field;
		long double long_double_field;
		unsigned int u_int_field;
		unsigned char u_char_field;
	};

	//Определение переменной структуры и её статическая инициализация
	struct s_truct first_var = {'a', 1, 10, 15, 3.14f, 2.7156, 1.23456, 1000000, 255};

	//Вывод размера структуры, размера переменной, адрес переменной, адрес каждого поля переменной, значение каждого поля переменной
	printf("Размер структуры: %zu байт\n", sizeof(struct s_truct));
	printf("Размер переменной: %zu байт\n", sizeof(first_var));
	printf("Адрес переменной: %p\n", (void*)&first_var);
	
	printf("Адрес char_field: %p, значение: %c\n", (void*)&first_var.char_field, first_var.char_field);
	printf("Адрес short_field: %p, значение: %d\n", (void*)&first_var.short_field, first_var.short_field);
	printf("Адрес int_field: %p, значение: %d\n", (void*)&first_var.int_field, first_var.int_field);
	printf("Адрес long_field: %p, значение: %ld\n", (void*)&first_var.long_field, first_var.long_field);
	printf("Адрес float_field: %p, значение: %f\n", (void*)&first_var.float_field, first_var.float_field);
	printf("Адрес double_field: %p, значение: %lf\n", (void*)&first_var.double_field, first_var.double_field);
	printf("Адрес long_double_field: %p, значение: %Lf\n", (void*)&first_var.long_double_field, first_var.long_double_field);
	printf("Адрес u_int_field: %p, значение: %u\n", (void*)&first_var.u_int_field, first_var.u_int_field);
	printf("Адрес u_char_field: %p, значение: %u\n", (void*)&first_var.u_char_field, first_var.u_char_field);

}