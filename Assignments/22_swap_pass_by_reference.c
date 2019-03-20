/* Title : swap two numbers
 * Author : Harish
 * Date : 6 Nov
 * Description : reads two nums from user, prints the swapped numbers
 */
#include <stdio.h>

/* swap: Swaps two numbers without using a temporay variable */
void swap(int *x, int *y)
{
	*x = *x ^ *y;
	*y = *x ^ *y;
	*x = *x ^ *y;
}

int main()
{
	int num1, num2;

	printf("Enter two numbers : ");
	scanf("%d %d", &num1, &num2);

	printf("\nBefore Swapping :\n num1 : %d  num2 : %d\n", num1, num2);
	swap(&num1, &num2);
	printf("\nAfter swapping :\n num1 : %d  num2 : %d\n", num1, num2);
}
