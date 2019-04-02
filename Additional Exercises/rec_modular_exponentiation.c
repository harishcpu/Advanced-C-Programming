#include <stdio.h>

/*Modular Exponentiation is a famous topic in Number theory */
/*Modular Exponentiation(Mod): calculates "(x^n) mod m" */
int Mod(int x, int n, int m)
{
	int y;
	if (n == 0) {
		return 1;
	}
	else if (n % 2 == 0) {
		y = Mod(x, n/2, m);
		return (y * y) % m;
	}
	else {
		return (((x % m) * Mod(x, n - 1, m)) % m);
	}
}

int main()
{
	int x, n, m;

	printf("Enter base : ");
	scanf("%d", &x);

	printf("Enter power : ");
	scanf("%d", &n);

	printf("Enter mod num : ");
	scanf("%d", &m);

	printf("Modular Exponentiation\n %d^%d %% %d : %d\n", x, n, m, Mod(x, n, m));

	return 0;
}
