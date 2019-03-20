/* Title : SWAP() - Macro
 * Author : Harish
 * Date : 21 Dec
 * Description : print the swapped numbers.
 */

#include <stdio.h>

#define SWAP(a, b, n)\
{\
	n temp;\
		temp = a;\
		a = b ;\
		b = temp;\
}

int main()
{
	int a = 12345, b = 67890;
	
	SWAP(a, b, int);
	printf("\n\ta : %ld	b : %ld\n\n", a, b);
}
