#include<stdio.h>

int main(){
	
	// Создание массивов и статическая инициализация их элементов в форматах ДВШВЭ
	char charAr[8] = {8, 10, -07, -11, 25, 0x1, 02, 14};
	short shortAr[8] = {11, 55, 077, 0x10, -34, 41, 033, 12};
	int intAr[8] = {47, 63, -022, 5, 0x18, 3, -0x9, 87};
	long longAr[8] = {0, -9, 05, -333, 456, -0x56, 0xff, 0};
	float floatAr[8] = {1.23f, 4.56f, 7.89e-2f, 10.11f, -12.13e+3f, 14.15f, -1.67f, 2.0e+6f};
	double doubleAr[8] = {1.23, 4.56, 7.89e-2, 10.11, -12.13e+3, 14.15, -1.67, 2.0e+6};
	long double longDoubleAr[8] = {1.23L, 4.56L, 7.89e-2L, 10.11L, -12.13e+3L, 14.15L, -1.67L, 2.0e+6L};

	//Вывод в циклах значения каждого элемента для каждого массива в форматах ДВШВЭ
	printf("charArray:\n");
	for(int i = 0; i < 8; i++){
		printf("Dec: %d; Oct: %o; Hex: %#x\n", charAr[i], charAr[i], charAr[i]);
	}

	printf("\nshortArray:\n");
	for(int i = 0; i < 8; i++){
		printf("Dec: %d; Oct: %o; Hex: %#x\n", shortAr[i], shortAr[i], shortAr[i]);
	}

	printf("\nintArray:\n");
	for(int i = 0; i < 8; i++){
		printf("Dec: %d; Oct: %o; Hex: %#x\n", intAr[i], intAr[i], intAr[i]);
	}

	printf("\nlongAr:\n");
	for(int i = 0; i < 8; i++){
		printf("Dec: %d; Oct: %o; Hex: %#x\n", longAr[i], longAr[i], longAr[i]);
	}

	printf("\nfloatArray:\n");
	for(int i = 0; i < 8; i++){
		printf("Dec: %f; Exp: %e; Hex: %#a\n", floatAr[i], floatAr[i], floatAr[i]);
	}

	printf("\ndoubleArray:\n");
	for(int i = 0; i < 8; i++){
		printf("Dec: %lf; Exp: %le; Hex: %#la\n", doubleAr[i], doubleAr[i], doubleAr[i]);
	}
	
	printf("\nlongDoubleArray:\n");
	for(int i = 0; i < 8; i++){
		printf("Dec: %Lf; Exp: %Le; Hex: %#La\n", longDoubleAr[i], longDoubleAr[i], longDoubleAr[i]);
	}
}