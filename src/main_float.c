#include <stdio.h>
#include <string.h>
#include <math.h>


struct _bit_field_
{
	unsigned int sign : 1;
	unsigned int exp : 8;
	unsigned int mantissa : 23;
};



static float __calculation ( struct _bit_field_ *bf )
{
	float result;
	float S = ( float ) bf -> sign;
	float E = ( float ) bf -> exp - 127.0;
	float M = ( float ) bf -> mantissa / ( pow ( 2, 23 ) );
	
	result = pow ( -1, S ) * pow ( 2, E) * ( 1 + M );

  	return result;
}




int main ( void )
{
	struct _bit_field_ bf;
	float var_fl = 4.0f;
	unsigned int var_bit;

	memcpy ( &var_bit, &var_fl, sizeof ( float ) );
  
	bf.sign = ( var_bit >> 31 ) & 0x01;
	bf.exp = ( var_bit >> 23 ) & 0xFF;
	bf.mantissa = var_bit & 0x7FFFFF;

	printf ( "float varible (DEC) = %f\n", __calculation ( &bf ) );


	var_fl = 1.0f;
	memcpy ( &var_bit, &var_fl, sizeof ( float ) );
  
	bf.sign = ( var_bit >> 31 ) & 0x01;
	bf.exp = ( var_bit >> 23 ) & 0xFF;
	bf.mantissa = var_bit & 0x7FFFFF;

	printf ( "float varible (HEX) = %a\n", __calculation ( &bf ) );
	return 0;
}

