#include<stdio.h>
#define arrayLength(arr) (sizeof(arr)/sizeof(arr[0]))

int main(){
	
	//----- 1 -----
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

	printf("\nlongArray:\n");
	for(int i = 0; i < 8; i++){
		printf("Dec: %ld; Oct: %lo; Hex: %#lx\n", longAr[i], longAr[i], longAr[i]);
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

	//----- 2 -----
	//Вывод начального адреса каждого массива, размер всего массива и размер отдельного элемента массива
	printf("charArray:\n");
	printf("Adress: %p; SizeAr: %zu; Size: %zu\n", charAr, sizeof(charAr), sizeof(charAr[0]));
	
	printf("\nshortArray:\n");
	printf("Adress: %p; SizeAr: %zu; Size: %zu\n", shortAr, sizeof(shortAr), sizeof(shortAr[0]));

	printf("\nintArray:\n");
	printf("Adress: %p; SizeAr: %zu; Size: %zu\n", intAr, sizeof(intAr), sizeof(intAr[0]));

	printf("\nlongArray:\n");
	printf("Adress: %p; SizeAr: %zu; Size: %zu\n", longAr, sizeof(longAr), sizeof(longAr[0]));

	printf("\nfloatArray:\n");
	printf("Adress: %p; SizeAr: %zu; Size: %zu\n", floatAr, sizeof(floatAr), sizeof(floatAr[0]));

	printf("\ndoubleArray:\n");
	printf("Adress: %p; SizeAr: %zu; Size: %zu\n", doubleAr, sizeof(doubleAr), sizeof(doubleAr[0]));
	
	printf("\nlongDoubleArray:\n");
	printf("Adress: %p; SizeAr: %zu; Size: %zu\n", longDoubleAr, sizeof(longDoubleAr), sizeof(longDoubleAr[0]));

	// Вывод дельты между адресами первого и последнего элемента массива
	printf("\ncharArray:\n");
	printf("Delta: %td", (charAr + arrayLength(charAr) - 1) - charAr);
	
	printf("\nshortArray:\n");
	printf("Delta: %td", (shortAr + arrayLength(shortAr) - 1) - shortAr);

	printf("\nintArray:\n");
	printf("Delta: %td", (intAr + arrayLength(intAr) - 1) - intAr);

	printf("\nlongArray:\n");
	printf("Delta: %td", (longAr + arrayLength(longAr) - 1) - longAr);

	printf("\nfloatArray:\n");
	printf("Delta: %td", (floatAr + arrayLength(floatAr) - 1) - floatAr);

	printf("\ndoubleArray:\n");
	printf("Delta: %td", (doubleAr + arrayLength(doubleAr) - 1) - doubleAr);
	
	printf("\nlongDoubleArray:\n");
	printf("Delta: %td", (longDoubleAr + arrayLength(longDoubleAr) - 1) - longDoubleAr);

	//Реализация циклов обхода элементов массивов на основе типового расчёта количества элементов в массиве в виде макровыражения
	printf("\ncharArray:\n");
	for(int i = 0; i < arrayLength(charAr); i++){
		printf("charAr[%d] = %d\t", i, charAr[i]);
	}
	
	printf("\nshortArray:\n");
	for(int i = 0; i < arrayLength(shortAr); i++){
		printf("shortAr[%d] = %d\t", i, shortAr[i]);
	}

	printf("\nintArray:\n");
	for(int i = 0; i < arrayLength(intAr); i++){
		printf("intAr[%d] = %d\t", i, intAr[i]);
	}

	printf("\nlongArray:\n");
	for(int i = 0; i < arrayLength(longAr); i++){
		printf("longAr[%d] = %ld\t", i, longAr[i]);
	}

	printf("\nfloatArray:\n");
	for(int i = 0; i < arrayLength(floatAr); i++){
		printf("floatAr[%d] = %f\t", i, floatAr[i]);
	}

	printf("\ndoubleArray:\n");
	for(int i = 0; i < arrayLength(doubleAr); i++){
		printf("doubleAr[%d] = %lf\t", i, doubleAr[i]);
	}
	
	printf("\nlongDoubleArray:\n");
	for(int i = 0; i < arrayLength(longDoubleAr); i++){
		printf("longDoubleAr[%d] = %Lf\t", i, longDoubleAr[i]);
	}
	
}

