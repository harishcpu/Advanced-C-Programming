#include <stdio.h> 

#if 0
void print(int *arr, int m, int n) 
{ 
	int i, j; 
	for (i = 0; i < m; i++)
		for (j = 0; j < n; j++)
			printf("%d ", *((arr+i*n) + j));
}

int main()
{
	int arr[][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}}; 
	int m = 3, n = 3; 

	// We can also use "print(&arr[0][0], m, n);" 
	print((int *)arr, m, n); 
	return 0; 
} 

#else

// C program to demonstrate working of shorthand
// array rotation.
#include <stdio.h>

int main()
{
	// This line is same as
	// int array[10] = {1, 1, 1, 1, 0, 0, 2, 2, 2, 2};
	int array[10] = {[0 ... 3]1, [6 ... 9]2};

	for (int i = 0; i < 10; i++)
		printf("%d ", array[i]);
	return 0;
}
#endif
