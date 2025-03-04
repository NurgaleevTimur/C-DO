#include <stdio.h>
#include <string.h>
#include <math.h>


struct _bit_field_
{
	unsigned long sign : 1;
	unsigned long exp : 11;
	unsigned long mantissa : 52;
};



static double __calculation ( struct _bit_field_ *bd )
{
	double result;
	double S = ( double ) bd -> sign;
	double E = ( double ) bd -> exp - 1023.0;
	double M = ( double ) bd -> mantissa / ( pow ( 2, 52 ) );
	
	result = pow ( -1, S ) * pow ( 2, E) * ( 1 + M );

  	return result;
}




int main ( void )
{
	struct _bit_field_ bd;
	double var_d = 4.0;
	unsigned long var_bit;

	memcpy ( &var_bit, &var_d, sizeof ( double ) );
  
	bd.sign = ( var_bit >> 63 ) & 0x01;
	bd.exp = ( var_bit >> 52 ) & 0x7FF;
	bd.mantissa = var_bit & 0xFFFFFFFFFFFFF;

	printf ( "double varible (DEC) = %lf\n", __calculation ( &bd ) );


	var_d = 1.0;

	memcpy ( &var_bit, &var_d, sizeof ( double ) );
  
	bd.sign = ( var_bit >> 63 ) & 0x01;
	bd.exp = ( var_bit >> 52 ) & 0x7FF;
	bd.mantissa = var_bit & 0xFFFFFFFFFFFFF;

	printf ( "double varible (HEX) = %la\n", __calculation ( &bd ) );

	return 0;
}

