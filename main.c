#include "include/c.h"




int main ( void )
{
	
	char *str = "eHlasdasdas\nasdasdas\0lo";

	printf ( "str_len\n");
	printf ( "lenght = %zu\n", str_len ( str ) );
	printf ( "lenght = %zu\n\n", strlen ( str ) );




	char    *strptr		= "defg";
	char    destptr [ 10 ];

	printf ( "str_cpy\n");
	printf ( "destptr = %s\nstrptr = %s\n\n", str_cpy ( destptr, strptr ), strptr );





	char    *st = "defge";
	char    *dt;

	printf ( "str_dup\n");
	dt = str_dup ( st );

	printf ( "destptr = %s\nstrptr = %s\n\n", dt, st );

	free ( dt );




	char    s1 [ 100 ]      = "ssh";
	char    *s2             = "defg";

	printf ( "str_cat\n");
	str_cat ( s1, s2 );
	
	printf ( "s1 = %s\ns2 = %s\n\n", s1, s2 );






	char    *str1   = "jsdlf";
	char    *str2   = "ds";

	printf ( "str_pbrk\n");
	printf ( "str1 = %s\nstr2 = %s\nstr3 = %s\n\n", str1, str2, str_pbrk ( str1, str2) );






	char* st1 = "af";
	char* st2 = "afa";

	printf ( "str_cmp\n");
	printf ( "%d\n\n", str_cmp ( st1, st2 ) );







	char	*s	= "kvxsaba";
	char	c	= 'a';
	char	*rt = str_chr ( s, c );

	printf ( "str_chr\n");
	if ( rt == NULL ) {
		printf ( "ERROR" );
	} else {
		printf ( "%s\n\n", rt );
	}







	char	*strg	= "abdabcd";
	char	*sub	= "ab";
	char	*result	= str_str ( strg, sub );

	printf ( "str_str\n");
	if ( result == NULL ){
		printf ( "ERROR" );
	} else {
		printf ( "str = %s\nsub = %s\nresult = %s\n\n", strg, sub, result );
	}
}