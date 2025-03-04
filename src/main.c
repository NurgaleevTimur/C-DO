#include <stdio.h>




int main ( void )
{
        printf ( "Таблица истинности логического сложения:\n");
        for ( int a = 0; a < 2; a++ )
        {
                for ( int b = 0; b < 2; b++ )
                {
                        printf ( "%d || %d = %d\n", a, b, a || b );
                }
        }



	printf ( "Таблица истинности логического умножения:\n");
        for ( int a = 0; a < 2; a++ )
        {
                for ( int b = 0; b < 2; b++ )
                {
                        printf ( "%d && %d = %d\n", a, b, a && b );
                }
        }

	
	printf ( "Таблица истинности логического отрицания:\n");
        for ( int a = 0; a < 2; a++ )
        {
                printf ( "!%d = %d\n", a, !a );
        }



	printf ( "Таблица истинности логического исключающего или:\n");
        for ( int a = 0; a < 2; a++ )
        {
                for ( int b = 0; b < 2; b++ )
                {
                        printf ( "%d ^ %d = %d\n", a, b, a ^ b );
                }
        }


}