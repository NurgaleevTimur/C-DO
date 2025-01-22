#include "c.h"

#define ARRAY_SIZE 64

int main(){
    char byte_array[ARRAY_SIZE];

    // Инициализация массива
    for (int i = 0; i < ARRAY_SIZE; i++){
        byte_array[i] = i;
    }
        
    // Функции вывода для каждого типа-размера
    printf("Вывод элемента массива:\n");
    output_value(byte_array, "char");
}