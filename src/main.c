#include "c.h"

#define ARRAY_SIZE 64

int main(){
    char byte_array[ARRAY_SIZE];

    // Инициализация массива
    input_value(byte_array, "char");
        
    // Функции вывода для каждого типа-размера
    printf("Вывод элементов массива:\n");
    output_value(byte_array, "char");
}