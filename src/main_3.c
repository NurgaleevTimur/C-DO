#include <stdio.h>





static void __set_bit ( unsigned char* mas_start, int bit_number, int value )
{
        int byte_number = bit_number / 8; 
        bit_number %= 8;

        mas_start [ byte_number ] &= ~( 1 << 8 - bit_number );
        
        mas_start [ byte_number ] |= ( value << 8 - bit_number );


}


int main ( void )
{
        unsigned char mas_start [ ] = { 0xFF, 0x01, 0x10};
        printf ( "%#X\n", mas_start [ 0 ]);

        __set_bit ( mas_start, 1, 0 );
        printf ( "%#X\n", mas_start [ 0 ]);

}