#include <stdio.h>

void print_bits(int num, int n)
{
	unsigned int mask = 1 << (n - 1);

	printf("\t\t");
	while(mask > 0) {
		printf("%d", (num & mask ? 1 : 0));
		mask >>= 1;
	}
}
