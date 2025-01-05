#include<stdio.h>
#include<stdbool.h>
#include<limits.h>
#include<float.h>

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

	/*
	Создание по две переменных (min, max) для каждой модифакации типа данных
	и присваивание соответствующих значений в 16-м формате
	*/
	signed char sCharMin = CHAR_MIN;
	signed char sCharMax = CHAR_MAX;
	unsigned char uCharMin = 0x00;
	unsigned char uCharMax = UCHAR_MAX;
	
	signed int sIntMin = INT_MIN;
	signed int sIntMax = INT_MAX;
	unsigned int uIntMin = 0x00;
	unsigned int uIntMax = UINT_MAX;

	signed short sShortMin = SHRT_MIN;
	signed short sShortMax = SHRT_MAX;
	unsigned short uShortMin = 0x00;
	unsigned short uShortMax = USHRT_MAX;

	signed long sLongMin = LONG_MIN;
	signed long sLongMax = LONG_MAX;
	unsigned long uLongMin = 0X00;
	unsigned long uLongMax = ULONG_MAX;

	long double doubleMin = DBL_MIN;
	long double doubleMax = DBL_MAX;

	//Вывод значения пееременных в десятичном, шестнадцатеричном, вещественном и экспоненциальном форматах
	printf("\nВывод значений целых типов\n");
	printf("(10)signed char: Min = %d; Max = %d\nunsigned char: Min = %u; Max = %u\n", sCharMin, sCharMax, uCharMin, uCharMax);
	printf("(16)signed char: Min = %x; Max = %x\nunsigned char: Min = %#x; Max = %#x\n\n", sCharMin, sCharMax, uCharMin, uCharMax);
	
	printf("(10)signed int: Min = %d; Max = %d\nunsigned int: Min = %u; Max = %u\n", sIntMin, sIntMax, uIntMin, uIntMax);
	printf("(16)signed int: Min = %x; Max = %x\nunsigned int: Min = %#x; Max = %#x\n\n", sIntMin, sIntMax, uIntMin, uIntMax);
	
	printf("(10)signed short: Min = %d; Max = %d\nunsigned short: Min = %u; Max = %u\n", sShortMin, sShortMax, uShortMin, uShortMax);
	printf("(16)signed short: Min = %x; Max = %x\nunsigned short: Min = %#x; Max = %#x\n\n", sShortMin, sShortMax, uShortMin, uShortMax);
	
	printf("(10)signed long: Min = %ld; Max = %ld\nunsigned long: Min = %lu; Max = %lu\n", sLongMin, sLongMax, uLongMin, uLongMax);
	printf("(16)signed long: Min = %lx; Max = %lx\nunsigned long: Min = %#lx; Max = %#lx\n\n", sLongMin, sLongMax, uLongMin, uLongMax);
	
	printf("\nВывод значений long double\n");
	printf("(10, вещ)long double: Min = %Lf; Max = %Lf\n", doubleMin, doubleMax);
	printf("(10, эксп)long double: Min = %Le; Max = %Le\n", doubleMin, doubleMax);
	printf("(16)long double: Min = %La; Max = %La\n", doubleMin, doubleMax);
}