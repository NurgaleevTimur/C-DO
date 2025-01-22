#include "c.h"
#include <string.h>

void output_value(void* arr, const char* ar_type) {
    if (strcmp(ar_type, "char") == 0) {
        char* char_arr = (char*)arr;
        for (int i = 0; i < 64; i++) {
            printf("arr[%d] = (10) %d\t(16) %#x\n", i, char_arr[i], char_arr[i]);
        }
    } else if (strcmp(ar_type, "short") == 0) {
        short* short_arr = (short*)arr;
         for (int i = 0; i < 64; i++) {
            printf("arr[%d] = (10) %d\t(16) %#x\n", i, short_arr[i], short_arr[i]);
        }
    } else if (strcmp(ar_type, "int") == 0) {
        int* int_arr = (int*)arr;
        for (int i = 0; i < 64; i++) {
           printf("arr[%d] = (10) %d\t(16) %#x\n", i, int_arr[i], int_arr[i]);
        }
    } else if (strcmp(ar_type, "long") == 0) {
       long* long_arr = (long*)arr;
        for (int i = 0; i < 64; i++) {
            printf("arr[%d] = (10) %ld\t(16) %#lx\n", i, long_arr[i], long_arr[i]);
        }
    } else if (strcmp(ar_type, "float") == 0) {
        float* float_arr = (float*)arr;
        for (int i = 0; i < 64; i++) {
           printf("arr[%d] = (float) %f\t(exp) %e\t(16) %#a\n", i, float_arr[i], float_arr[i], float_arr[i]);
        }
    } else if (strcmp(ar_type, "double") == 0) {
        double* double_arr = (double*)arr;
         for (int i = 0; i < 64; i++) {
             printf("arr[%d] = (double) %lf\t(exp) %le\t(16) %#la\n", i, double_arr[i], double_arr[i], double_arr[i]);
        }
    } else {
        printf("Неизвестный тип: %s\n", ar_type);
    }
}