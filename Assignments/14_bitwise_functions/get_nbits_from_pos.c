#if 0
#include <stdio.h>

//#define POSITION 1	/* extract from 1st bit */

int get_nbits_from_pos(int num, int n, int pos)
{
	int count;
	int bit;
	char bits[n];

	count = 0;
	printf("The bits you wanted : ");
	for(bit = pos; count < n; --bit) {
		bits[count] = (num & (1 << bit)) >> bit;
		++count;
	}
	
	for(int i = 0; i < n; printf("%d",bits[i]),++i);
	bit = (pos - n) + 2;
	return ((( 1 << n ) - 1 ) & (num >> ( bit - 1 )));	/* returns the decimal equivalent of the bits from POSTION - 1 to bitswanted */
}

#else 
int get_nbits_from_pos(int num, int nb, int pos)
{
	return ((num >> (pos - (nb - 1))) & ~(~0 << nb));
}
#endif
