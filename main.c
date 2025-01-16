#include <stddef.h>
#include "c.h"

int main(){

//------ 1 ------
	printf("------ 1 ------\n");
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
	struct s_truct struct_var = {'a', 1, 10, 15, 3.14f, 2.7156, 1.23456, 1000000, 255};

	//Вывод размера структуры, размера переменной, адрес переменной, адрес каждого поля переменной, значение каждого поля переменной
	printf("Размер структуры: %zu байт\n", sizeof(struct s_truct));
	printf("Размер переменной: %zu байт\n", sizeof(struct_var));
	printf("Адрес переменной: %p\n", (void*)&struct_var);
	
	printf("Адрес char: %p, значение: %c\n", (void*)&struct_var.char_field, struct_var.char_field);
	printf("Адрес short: %p, значение: %d\n", (void*)&struct_var.short_field, struct_var.short_field);
	printf("Адрес int: %p, значение: %d\n", (void*)&struct_var.int_field, struct_var.int_field);
	printf("Адрес long: %p, значение: %ld\n", (void*)&struct_var.long_field, struct_var.long_field);
	printf("Адрес float: %p, значение: %f\n", (void*)&struct_var.float_field, struct_var.float_field);
	printf("Адрес double: %p, значение: %lf\n", (void*)&struct_var.double_field, struct_var.double_field);
	printf("Адрес long: %p, значение: %Lf\n", (void*)&struct_var.long_double_field, struct_var.long_double_field);
	printf("Адрес u_int: %p, значение: %u\n", (void*)&struct_var.u_int_field, struct_var.u_int_field);
	printf("Адрес u_char: %p, значение: %u\n", (void*)&struct_var.u_char_field, struct_var.u_char_field);

//------ 2 ------
	printf("\n------ 2 ------");
	//Объявление структуры из 9 полей
	union u_nion
	{
		char char_union;
		short short_union;
		int int_union;
		long long_union;
		float float_union;
		double double_union;
		long double long_double_union;
		unsigned int u_int_union;
		unsigned char u_char_union;
	};

	//Определение переменной объединения и её статическая инициализация
	union u_nion union_var;
	union_var.char_union = 55;

	//Вывод размера объединения, размера переменной, адрес переменной, адрес каждого поля переменной, значение каждого поля переменной
	printf("\nРазмер объединения: %zu\n", sizeof(union u_nion));
	printf("Размер переменной: %zu\n", sizeof(union_var));
	printf("Адрес переменной: %p\n", (void*)&union_var);

	printf("Адрес char: %p, значение: %d\n", (void*)&union_var.char_union, union_var.char_union);
	printf("Адрес short: %p, значение: %d\n", (void*)&union_var.short_union, union_var.short_union); 
	printf("Адрес int: %p, значение: %d\n", (void*)&union_var.int_union, union_var.int_union);
	printf("Адрес long: %p, значение: %ld\n", (void*)&union_var.long_union, union_var.long_union);
	printf("Адрес float: %p, значение: %f\n", (void*)&union_var.float_union, union_var.float_union);
	printf("Адрес double: %p, значение: %lf\n", (void*)&union_var.double_union, union_var.double_union);
	printf("Адрес long: %p, значение: %Lf\n", (void*)&union_var.long_double_union, union_var.long_double_union);
	printf("Адрес u_int: %p, значение: %u\n", (void*)&union_var.u_int_union, union_var.u_int_union);
	printf("Адрес u_char: %p, значение: %u\n", (void*)&union_var.u_char_union, union_var.u_char_union);

//------ 3 ------
	printf("\n------ 3 ------\n");
	//Преобразование полей объединения в массивы
	union u_nion_mas
	{
		char mas_char_union[16];
		short mas_short_union[8];
		int mas_int_union[4];
		long mas_long_union[2];
		float mas_float_union[4];
		double mas_double_union[2];
		long double long_double_union;
		unsigned int mas_u_int_union[4];
		unsigned char mas_u_char_union[16];
	};

	//Определение переменной объединения
	union u_nion_mas ar_var;

	//Инициализация объединение ar_var
    ar_var.mas_int_union[0] = 1;
    ar_var.mas_int_union[1] = 2;
    ar_var.mas_int_union[2] = 3;
    ar_var.mas_int_union[3] = 4;
    
    
    //Вывод размера объединения, размера переменной, адрес переменной
    printf("Размер объединения: %zu\n", sizeof(union u_nion_mas));
    printf("Размер переменной: %zu\n", sizeof(ar_var));
    printf("Адрес переменной: %p\n", (void*)&ar_var);

   // Вывод данных для каждого массива внутри u_nion_mas
	printf("\nmas_char_union: \n");
    print_array_elements(ar_var.mas_char_union, sizeof(union u_nion_mas) / sizeof(ar_var.mas_char_union[0]), CHAR_TYPE);

	printf("\nmas_short_union: \n");
    print_array_elements(ar_var.mas_short_union, sizeof(union u_nion_mas) / sizeof(ar_var.mas_short_union[0]), SHORT_TYPE);

	printf("\nmas_int_union: \n");
    print_array_elements(ar_var.mas_int_union, sizeof(union u_nion_mas) / sizeof(ar_var.mas_int_union[0]), INT_TYPE);

	printf("\nmas_long_union: \n");
    print_array_elements(ar_var.mas_long_union, sizeof(union u_nion_mas) / sizeof(ar_var.mas_long_union[0]), LONG_TYPE);

	printf("\nmas_float_union: \n");
    print_array_elements(ar_var.mas_float_union, sizeof(union u_nion_mas) / sizeof(ar_var.mas_float_union[0]), FLOAT_TYPE);

	printf("\nmas_double_union: \n");
    print_array_elements(ar_var.mas_double_union, sizeof(union u_nion_mas) / sizeof(ar_var.mas_double_union[0]), DOUBLE_TYPE);

	printf("\nlong_double_union: \n");
    printf("Адрес long_double_union: %p, значение: %Lf\n", (void*)&ar_var.long_double_union, ar_var.long_double_union);

	printf("\nmas_u_int_union: \n");
	print_array_elements(ar_var.mas_u_int_union, sizeof(union u_nion_mas) / sizeof(ar_var.mas_u_int_union[0]), U_INT_TYPE);

	printf("\nmas_u_char_union: \n");
    print_array_elements(ar_var.mas_u_char_union, sizeof(union u_nion_mas) / sizeof(ar_var.mas_u_char_union[0]), U_CHAR_TYPE);

}