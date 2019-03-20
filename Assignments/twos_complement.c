/* Title : Two's complement
 * Author : Harish
 * Date : 30 Nov
 * read num, find two's complement
*/

#include <stdio.h>

int print_bits(int);
int add1(int, int);

int main()
{
	
	int num, ones, twos;

	printf("Enter an integer: ");
	scanf("%d",&num);

	printf("Number : %3d : ",num);
	print_bits(num);

	ones = ~num;                        /* take one's complement */
	printf("\nOne's : %d : ",ones);
	print_bits(ones);
	putc('\n', stdout);

	twos = add1(ones, 1);               /* get the two's complemented number */
	printf("Two's : %d : ",twos);
	print_bits(twos);
	putc('\n', stdout);
	
}

/* print_bits: print the bits of an integer number */
int print_bits(int n)
{
	unsigned int mask = 1 << ((sizeof (int) << 3)- 1);
	while(mask)
	{
		printf("%d", ( n & mask ? 1 : 0));
		mask >>= 1;
	}
}

/* add1: adding 1 to the one's conplemented number */
int add1(int a, int b)
{
	while(b) 
	{
		int borrow = a & b;
		a = a ^ b;
		b = borrow << 1;        //shift borrow by 1 
	}
	return a;
}
