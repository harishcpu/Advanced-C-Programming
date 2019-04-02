#include <stdio.h>

#if 0
//Albert's technique
int power(int x, int n)
{
	if (n == 0)
		return 1;
	return x * power(x, n -1);
}
#else
//Pinto's technique
int power(int x, int n)
{
	int y;
	if (n == 0) {
		return 1;
	}
	else if (n % 2 == 0) {
		y = power(x, n/2);
		return y * y;
	}
	else {
		return x * power(x, n - 1);
	}
}
#endif
int main()
{
	int x, n;

	printf("Give base : ");
	scanf("%d", &x);

	printf("Give power: ");
	scanf("%d", &n);

	printf(" %d^%d : %d\n", x, n, power(x, n));
	return 0;
}
