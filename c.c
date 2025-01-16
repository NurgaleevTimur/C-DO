/******************************//*!
 * \file
 * \brief	Файл реализации функции для вывода элементов массива любого типа
 * \author
 * \date	Создан: 16.01.2025
 * \date	Изменён: 16.01.2025
 */

#include "c.h"

void print_array_elements(void* arr, size_t len, DataType type){
	switch (type){
		case CHAR_TYPE:{
			char* char_arr = (char*)arr;
			for(size_t i = 0; i < len; i++){
				printf("Адрес элемента №%zu: %p, значение: %d\n", i, &char_arr[i], char_arr[i]);
			}
			break;
		}
		case SHORT_TYPE:{
			short* short_arr = (short*)arr;
			for(size_t i = 0; i < len; i++){
				printf("Адрес элемента №%zu: %p, значение: %d\n", i, &short_arr[i], short_arr[i]);
			}
			break;
		}
		case INT_TYPE:{
			int* int_arr = (int*)arr;
			for(size_t i = 0; i < len; i++){
				printf("Адрес элемента №%zu: %p, значение: %d\n", i, &int_arr[i], int_arr[i]);
			}
			break;
		}
		case LONG_TYPE:{
			long* long_arr = (long*)arr;
			for(size_t i = 0; i < len; i++){
				printf("Адрес элемента №%zu: %p, значение: %ld\n", i, &long_arr[i], long_arr[i]);
			}
			break;
		}
		case FLOAT_TYPE:{
			float* float_arr = (float*)arr;
			for(size_t i = 0; i < len; i++){
				printf("Адрес элемента №%zu: %p, значение: %f\n", i, &float_arr[i], float_arr[i]);
			}
			break;
		}
		case DOUBLE_TYPE:{
			double* double_arr = (double*)arr;
			for(size_t i = 0; i < len; i++){
				printf("Адрес элемента №%zu: %p, значение: %lf\n", i, &double_arr[i], double_arr[i]);
			}
			break;
		}
		case U_INT_TYPE:{
			unsigned int* u_int_arr = (unsigned int*)arr;
			for(size_t i = 0; i < len; i++){
				printf("Адрес элемента №%zu: %p, значение: %u\n", i, &u_int_arr[i], u_int_arr[i]);
			}
			break;
		}
		case U_CHAR_TYPE:{
			unsigned char* u_char_arr = (unsigned char*)arr;
			for(size_t i = 0; i < len; i++){
				printf("Адрес элемента №%zu: %p, значение: %u\n", i, &u_char_arr[i], u_char_arr[i]);
			}
			break;
		}
		
		default:
			break;
	}
}

/******************************//*!
	Описание
	\param[in]	arr		Указатель на начало массива
	\param[in]	len 	Кол-во элементов
	\param[in]	type 	Тип массива
	\return				Void
*/

