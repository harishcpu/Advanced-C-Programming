/* Title : fibonacci series using recursion
 * Author : Harish
 * Date : 10 Oct
 * Description : read number from user, print fibonacci series
 */
#include <stdio.h>

int fibonacci(int n);

int main()
{
	int sign = 0, n = 0;
	printf("Enter n : ");
	scanf("%d", &n);			// get number
	if (n > 1024) {
		puts("Invalid input");
		return 0;
	}
	if (n < 0) {
		n = -n;				// check if num  is negative
		sign = 1;
	}

	for (int c = 0, i = 0; i < n; i++) {
		if ((c = fibonacci(i)) <= n) {
			if (sign == 1 && (i % 2) == 0 && i > 0)
				putc('-', stdout);
		    printf("%d ", fibonacci(i));// print the fibonacci subscript
		} else
			break;
	}
	putc('\n', stdout);
	return 0;
}

/* returns a subscript of the fibonacci series */
int fibonacci(int n)
{
	return (n == 0 || n == 1) ? n : (fibonacci(n - 1) + fibonacci(n - 2)); 

/*	if (n == 0 || n == 1)
		return n;
	else
		return (fibonacci(n - 1) + fibonacci(n - 2));
*/
}
