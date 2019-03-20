/* Title : Print a number is "Even or Odd" using bitwise operators
 * Author : Harish
 * Date : 29 Nov
 * Description : read a number, print is even or odd
 */
#include<stdio.h>

void main()
{
	int n;
	printf("Enter a number : ");
	scanf("%d",&n);                     //read the number
#if 0
    if(n & 1 == 1)                      //find even or odd
		printf("Odd\n");
	else
		printf("Even\n");
#elif 0
    n & 1 ? printf("%d is Odd\n", n) : printf("%d is Even\n", n);       //using ternary
#endif
	printf("NOTE: 1 is for odd, 0 is for even.\n%d\n", (n & 1));
}
