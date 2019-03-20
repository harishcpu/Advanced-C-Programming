#include <stdio.h>

void print_bits(void *num)
{
	unsigned long mask = 1lu << 63;
	int i = 0;
	while(mask) {
		if (i++ % 8 == 0)
			putc(' ', stdout);
		printf("%d", !!(*(unsigned long *)num & mask));
		mask >>= 1;
	}
	putc('\n', stdout);
}
