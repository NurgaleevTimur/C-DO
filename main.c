#include<stdio.h>
#include<stdbool.h>

int main(){
	// Создание переменных для каждого типа данных
	bool boolVar;
	char charVar;
	int intVar;
	short shortVar;
	long longVar;
	float floatVar;
	double doubleVar;

	// Вывод размера в байтах для каждой переменной
	printf("Размер bool: %zu\n", sizeof(boolVar));
	printf("Размер char: %zu\n", sizeof(charVar));
	printf("Размер int: %zu\n", sizeof(intVar));
	printf("Размер short: %zu\n", sizeof(shortVar));
	printf("Размер long: %zu\n", sizeof(longVar));
	printf("Размер float: %zu\n", sizeof(floatVar));
	printf("Размер double: %zu\n", sizeof(doubleVar));

	// Создание переменных с учётом модификатора типа данных
	signed char sCharVar;
    unsigned char unCharVar;

    signed int sIntVar;
    unsigned int unIntVar;

    signed short sShortVar;
    unsigned short unShortVar;

    signed long sLongVar;
    unsigned long unLongVar;

    long double longDoubleVar;

	// Вывод размера в байтах для каждой переменной
	printf("\nРазмер sChar: %zu\n", sizeof(sCharVar));
	printf("Размер unChar: %zu\n", sizeof(unCharVar));

	printf("Размер sIntVar: %zu\n", sizeof(sIntVar));
	printf("Размер unIntVar: %zu\n", sizeof(unIntVar));

	printf("Размер sShortVar: %zu\n", sizeof(sShortVar));
	printf("Размер unShortVar: %zu\n", sizeof(unShortVar));

	printf("Размер sLongVar: %zu\n", sizeof(sLongVar));
	printf("Размер unLongVar: %zu\n", sizeof(unLongVar));

	printf("Размер longDoubleVar: %zu\n", sizeof(longDoubleVar));	
}