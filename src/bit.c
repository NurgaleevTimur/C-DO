#include <stdio.h>


int main ( void )
{
        short a = 0;
        printf ( "%hd\n", a );
        for (int i = 0; i < 16; i++ )
        {
                printf ( "%d  %hd\n", i,  ( a | ( 1 << i ) ) );
        }
        a = 0xffff;
        for (int i = 0; i < 16; i++ )
        {
                printf ( "%hd\n", ( a & ( ~( 1 << i ) ) ) );
        }

        int b = 15;
        

        for ( int i = 0; i < 10; i++ )
        {
                b = b ^ 1;

                printf ( "%d\t", b );
                
        }

        return 0;
}
