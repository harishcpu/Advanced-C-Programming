
#include "macros.h"

int decimal_to_binary()
{
	int i, num;
	int BITS[NO_BITS];

	printf("Enter your decimal number : ");
	scanf("%d", &num);
	printf("Binary equivalent of number %d is ", num);
	for (i = 0; i <= NO_BITS; ++i)
			 BITS[i] = (num & (1 << i)) >> i;
	for (i = NO_BITS; i >= 0; --i)
			printf("%d", BITS[i]);
	return 0;
}

