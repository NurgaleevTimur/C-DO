#include "c.h"
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <time.h>

void input_value(void* arr, const char* ar_type) {
	//Инициализация генератора случайных члиел
    srand(time(NULL));
    if (strcmp(ar_type, "char") == 0) {
        char* char_arr = (char*)arr;
        for (int i = 0; i < 64; i++) {
           char_arr[i] = rand() % 100; // от 0 до 99
        }
    } else if (strcmp(ar_type, "short") == 0) {
        short* short_arr = (short*)arr;
        for (int i = 0; i < 64; i++) {
           short_arr[i] = rand() % 1000;  // от 0 до 999
        }
    } else if (strcmp(ar_type, "int") == 0) {
        int* int_arr = (int*)arr;
        for (int i = 0; i < 64; i++) {
          int_arr[i] = rand(); //  Оставил полный диапазон для int
        }
    } else if (strcmp(ar_type, "long") == 0) {
        long* long_arr = (long*)arr;
         for (int i = 0; i < 64; i++) {
           long_arr[i] = (long)rand() * rand(); //  Генерация более длинных чисел для long
        }
    } else if (strcmp(ar_type, "float") == 0) {
        float* float_arr = (float*)arr;
        for (int i = 0; i < 64; i++) {
           float_arr[i] = (float)rand() / (float)RAND_MAX;  // Случайные числа от 0 до 1
        }
    } else if (strcmp(ar_type, "double") == 0) {
        double* double_arr = (double*)arr;
        for (int i = 0; i < 64; i++) {
           double_arr[i] = (double)rand() / (double)RAND_MAX; //  Случайные числа от 0 до 1
        }
    } else {
        printf("Неизвестный тип: %s\n", ar_type);
    }
}