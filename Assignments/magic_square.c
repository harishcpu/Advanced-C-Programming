/* Title : Magic Square
 * Author : Harish
 * Date : 23 Nov
 * Description : read n from user, print the magic square
 */

#include <stdio.h>
#include "colors.h"

int a[10][10];

int main()
{
	int i, r, c, n, s = 0;
	
	do {
	printf("\n\t\t  Enter one odd number : ");
	scanf("%d", &n);
	} while (!(n & 1));
	printf("\n\t\t" BOLDRED "  Pre-calculated magic sum : %d\n" RESET, n * (n * n + 1) / 2);

	r = 1; c = (n + 1)/2;
	for (i = 1; i <= n*n; i++)
	{
		a[r][c] = i;
		r--;
		c++;

		if (r < 1 && c > n) { 
			r += 2; c -= 1; 
		}
		if (r < 1) r = n;
		if (c > n) c = 1;
		if (a[r][c] != 0) {
			r += 2; c -= 1;
		}
	}
	for (r = 1; r <= n; r++) {
		printf("\n\t\t");
		for (c = 1; c <=n; c++) {
			printf("%4d ", a[r][c]);
		if (r == c)
			s += a[r][c];
		}
	}
	printf("\n\n\t\t" BOLDRED "  The obtaibed magic sum : %d\n\n" RESET, s);
	return 0;
}
