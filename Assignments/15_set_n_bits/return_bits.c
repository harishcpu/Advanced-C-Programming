#include <stdio.h>

int print_bits(int n)
{
	int i;
	int count = 0;
	while (count < 8) {
		if (n & 0x80)
			printf("1");
		else
			printf("0");
		n <<= 1;
		++count;
	}
}
