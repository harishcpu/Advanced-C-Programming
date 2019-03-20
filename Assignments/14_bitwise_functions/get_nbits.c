#include <stdio.h>

#define POSITION 1	/* extract from 1st bit */

int get_nbits(int num, int bitswanted)
{
	char bits[bitswanted];
	int i;
	
/*	printf("The %d bits from LSB end of %d : ", bitswanted, num);
	for(i = 0; i < bitswanted; ++i) {
//		printf("%d\n",i); */
//		bits[i] = (num & (1 << i)) >> i;			/* extracts each bit in i-th postion */
//	}
// printf("i = %d",i); */
//	for(i = i-1; i >= 0; printf("%d",bits[i]),--i);
//	*/

	return (((1 << bitswanted) - 1) & (num >> (POSITION - 1 )));	/* returns the decimal equivalent of the bits from POSTION - 1 to bitswanted */
}
