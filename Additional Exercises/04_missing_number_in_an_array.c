#include <stdio.h>

int main()
{
	int n = 10;
	int ary[n] = {0, 1, 2, 3, 4, 6, 7, 8, 9};
	int real_sum = 0;

	for (int i = 0; i < 10; i++)
		real_sum += ary[i];

	int sum = (n* (n - 1) / 2);

	printf("The missing element element in the array: %d", sum - real_sum);
}
