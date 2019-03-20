/* Title : Variance 
 * Author : Harish
 * Date : 19 Dec
 * Description : array size from user, print sum, difference, variance
 */
#include <stdio.h>
#include <stdlib.h>

void find_difference_variance(int* A, int n, int* sum, int mean, int* dSum)
{
	printf("\nD^2   Diff(D) = Num-Mean   Numbers\n");
	printf("---   -----------------    ------\n");
	for (int i = 0; i < n; ++i) {		// calculate Difference and its square
		printf(" %d\t \t%2d \t   %d\n", *(A+i) *= *(A+i) , *(A+i) -= mean, *(A+i));
		*dSum += *(A+i);
	}
	printf("--------------------------------\n");
	printf("sum(D^2) : %d\t\t sum : %d\n\nThe Variance : %d\n", *dSum, *sum, *dSum/n); //finds variance and prints it
}

int main()
{
	int n, mean, sum = 0, dSum = 0;
	int *arr;

	printf("Enter the total no. of elements : ");
	scanf ("%d", &n), getchar();

	int ary[n];
	printf("1. Static array\n2. Dynamic array\nYour Choice : ");
	if (getc(stdin) == '1') {
		for (int i = 0; i < n; ++i) {		// read the array elements
			printf("[%2d] : ", i+1);
			scanf("%d", (ary + i));
			sum += *(ary + i);			// finds sum
		}
		mean = sum / n;			// finds mean
		find_difference_variance(ary, n, &sum, mean, &dSum);
	}
	else
	{
		arr = (int *)malloc(sizeof(int) * n);
		for (int i = 0; i < n; ++i) {		// read the array elements
			printf("[%2d] : ", i+1);
			scanf("%d", (arr + i));
			sum += *(arr + i);			// finds sum
		}
		mean = sum / n;			// finds mean
		find_difference_variance(arr, n, &sum, mean, &dSum);
	}
}

