#include <stdio.h>

unsigned int replace_nbits_from_pos(int n, int i, int b, int pos);
int print_bits(int n);

int main()
{
	int n, i, a, b;
	int result;
	char c;

	do {
	printf("Enter the value of n : ");
	scanf("%d", &n);
	printf("Enter the value of I : ");
	scanf("%d", &i);

	printf("Enter the value of a : ");
	scanf("%d", &a);
	if (a < 0 || a > 31 )
		return 0;

	printf("Enter the value of b : ");
	scanf("%d", &b);
	if (b < 0 && b > 31)
		return 0;

	printf("Binary eq of n : ");
	print_bits(n);
	printf("\n");
	printf("Binary eq of i : ");
	print_bits(i);
	printf("\n");

	result = replace_nbits_from_pos(i, n, a, b+1-a);
	printf("result : %d\n", result);
	printf("Binary eq of modified i : ");
	print_bits(result);
	printf("\n");

	printf("Do you want to continue (Y/N) : ");
	scanf("\n%c", &c);
	} while ( c == 'Y' || c == 'y' );
	return 0;
}

