/* Title : Find the median of two unsorted arrays
 * Author : Harish
 * Date : 28 Nov
 * Description : get the arrays, sort them and print the median
 */
#include<stdio.h>
#include<stdlib.h>
#include<limits.h>

#define max(a,b) ((a>b)?a:b)

void SortArray(int arr[], int n);
void FindMedian(int x[], int y[], int a, int b);

int main()
{
	int n1, n2;
//reading array A's length and its elements	
	printf("Enter size of array A: ");
	scanf("%d", &n1);
	if (n1 > 10) {
		printf("Max array elements exeeded\n");
		return 0;
	}
					//	int *A=(int *)malloc(n1 * sizeof(int));
	int A[n1];
	printf("Enter the %d elements in array A : ",n1);
	for(int i=0; i<n1; i++)
		scanf("%d",&A[i]);
//reading array B's length and its elements
	printf("Enter the size of array B: ");
	scanf("%d", &n2);
	if (n2 > 10) {
		printf("Max array elements exeeded\n");
		return 0;
	}
					//	int *B=(int *)malloc(n2 * sizeof(int));
	int B[n2];
	printf("Enter the %d elements in array B : ",n2);
	for(int i=0; i<n2; i++)
		scanf("%d",&B[i]);
//sorting arrays A and B in ascending order
	printf("\nSorted Array A : ");
	SortArray(A,n1);
				printf("A[0 - %d] : ", n1 - 1);
				for(int i=0; i<n1; i++) {
					printf(" %d", A[i]);
				}
				printf("\n");

	printf("Sorted Array B : ");
	SortArray(B,n2);
				printf("B[0 - %d] : ", n2 - 1);
				for(int i=0; i<n2; i++) {
					printf(" %d", B[i]);
				}
				printf("\n");

//finding median of the two arrays
	double median;
				printf("Median of A : %d\nMedian of B : %d\n", A[n1/2], (B[n2/2] + B[n2/2 + 1]) / 2);
	FindMedian(A, B, n1, n2);
	putc('\n', stdout);
}


void SortArray(int arr[], int n)
{
	int i, j, temp;
	for(i=0; i<n; i++) {
		for(j=(i+1); j<n; j++) {
			if(arr[i] > arr[j]) {
				temp=arr[i];
				arr[i]=arr[j];
				arr[j]=temp;
	}	}	}
}


void FindMedian(int x[],int y[], int a, int b)
{
	int u, v;
	float median, medianA, medianB;

	u = a / 2;
	v = b / 2;
	if (a % 2 == 0)
		medianA = (x[u] + x[u+1]) / 2;
	else
		medianA = x[u];
	if (b % 2 == 0)
		medianB = (y[v] + y[v+1]) / 2;
	else
		medianB = y[v];

	median = (medianA + medianB) / 2;

	printf("The median is %f", median);
}
