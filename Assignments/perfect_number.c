/* Title : Perfect Number 
 * Author : Harish
 * Date : 28 Nov
 * Description : no. of lines from user, the string in 'X' format
 */
#include<stdio.h>

int main()
{
	int num,rem,i;
	int sum=0;

	printf("Enter a number(less than 2^20)");
	scanf("%d",&num);
	if(num < 1 || num > 1048576)	// 2^20 = 1048576
	{
		printf("Invald input\n");
		return num;
	}

	for(i=1; i<=(num-1); i++)
	{
		rem = num % i;      //  check if the number is divisable by i
		if( rem == 0)
		{
			sum=sum+i;      // the sum of positive divisors of a number
		}
	}

	if(sum == num)          // print if is a perfect number or not
	{
		printf("%d is a perfect number\n",num);
	}
	else
	{
		printf("%d is not a perfect number\n",num);
	}
}
