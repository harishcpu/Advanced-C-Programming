/* Title : sizes of various data types
 * Author : Harish
 * Date : 23 Nov
 * No input, Size of datatypes */
#include<stdio.h>

int main()
{

	printf("size of void : %zu bytes\n", sizeof(void));

	printf("\nsize of signed char : %d bytes",(int)sizeof(signed char));
	printf("\nsize of unsigned char : %d bytes",(int)sizeof(unsigned char));

	printf("\nsize of signed int : %d bytes",(int)sizeof(signed int));
	printf("\nsize of unsigned int : %d bytes",(int)sizeof(unsigned int));
	printf("\n\nsize of short int : %d bytes",(int)sizeof(short int));
	printf("\nsize of long int : %d bytes",(int)sizeof(long int));
	
	printf("\n\nsize of float : %d bytes",(int)sizeof(float));
	printf("\nsize of double : %d bytes",(int)sizeof(double));
	printf("\nsize of long double : %d bytes",(int)sizeof(long double));

	printf("\n\nsize of short : %d bytes",(int)sizeof(short));
	printf("\nsize of long : %d bytes\n",(int)sizeof(long));

	printf("\nsize of 'A' : %d bytes\n",(int)sizeof('A'));
	printf("\nsize of 5 : %d bytes\n",(int)sizeof(5));
	printf("\nsize of -5 : %d bytes\n",(int)sizeof(-5));
	printf("\nsize of 0.7 : %d bytes\n",(int)sizeof(0.7));

	return 0;
}
