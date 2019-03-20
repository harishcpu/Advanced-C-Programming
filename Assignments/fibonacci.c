/* Title : Fibonacci series
 * Author : Harish
 * Date : 23 Nov
 * read limit, print series*/
#include <stdio.h>

int main(void)
{
	int limit, sign = 0;
	int a = 0, b = 1, c = a + b;

	printf ("Enter the limit (< 2^20 : 1048576)(can be +ve or -ve): ");
	scanf ("%d", &limit);
	if (limit >= 1048576 && limit <= -1048576) {        //check if the number is in range
		puts("Invalid input");
		return 0;
	}
	
	if (limit < 0) {                                    //check for negative series
		limit = -limit;
		sign = 1;
	}

	if (limit == 0) 
		printf("The series : %d\n", a);
	else if (limit == 1)
		printf("The series : %d %d\n", a, b);
	
	for (int i = 0; c < limit; ++i) {                   //print the series
		if (sign == 1) {
			if (i % 2 == 0)
				printf("-%d ", c);
			else
				printf("%d ", c); 
		}
		else
			printf("%d ", c);
		a = b;
		b = c;
		c = a + b;
	}
	putchar('\n'); 
    return 0;
}
