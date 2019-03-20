/* Title : Check IEEE Standard
 * Author : Harish
 * Date : 21 Dec
 * Description : get a decimal point number, print the bits.
 */

#include <stdio.h>

void print_float_bits(int* m)
{
	unsigned int mask;
	int count = 0;

	mask = (1 << (((sizeof(*m)) * 8) - 1));			//mask for extracting each bits from num
	while (mask) {					
		if (count == 1 || count == 9) {
			printf("    ");
		}
	printf("%d", (((mask & *m) != 0) ? 1 : 0));		//prints bits
	++count;
	 mask >>= 1;
	}
}

void print_double_bits(long* m)
{
	unsigned long mask;
	int count = 0;

	mask = (1ul << (((sizeof(*m)) * 8) - 1));		//mask for extracting each bits from num
	while (mask) {
		if (count == 1 || count == 12) {
			printf("    ");
		}
	printf("%d", (((mask & *m) != 0) ? 1 : 0));		//prints bits
	++count;
	mask >>= 1;
	}
}

int main()
{
	float num1;
	double num2;
	int choice;

	printf("Enter you choice :\n");
	printf("1. Float\n2. Double\n");
	printf("Choice : ");
	scanf("%d", &choice), getc(stdin);

	if (choice == 1) 
	{
		printf("Enter the float value : ");
		scanf("%f", &num1);

		printf("\nSign  Mantissa 		    Exponent\n");	//print float bits
		print_float_bits((int *) &num1);

	}
	else if (choice == 2)
	{
		printf("Enter the double value : ");
		scanf("%lf", &num2);
		printf("\nSign Mantissa  		     Exponent\n");	//print double bits
		print_double_bits((long *) &num2);
	}
	else
		printf("Invalid choice\n");
	putc('\n', stdout);
	return 0;
}























//	int sign, mantissa, exponent;
/*	mantissa = (*m & ((~(~0 << ((sizeof(float) * 8) - 2))) & (~0 <<((sizeof(float) * 8) - 9))));
	exponent = (*m & (~0 >> ((sizeof(float) * 8) - 24)));
	sign = (*m & (~(~0 >> 1)));
*/
