#include <stdio.h>

int factorial(int n)
{
	printf("I am calculating F[%d]..\n", n);
	if (n == 0)
		return 1;
	int F = n * factorial(n - 1);
	printf("Done ! F[%d] : %d\n", n, F);
	return F;
}

int main()
{
	int n;

	printf("Give me n : ");
	scanf("%d", &n);

	printf("\nIn main\nThe factorial of %d : %d\n", n ,factorial(n));

	return 0;
}
