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
}