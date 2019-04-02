#include <stdio.h>

//Albert's Logic
#if 0
int fibonacci(int n)
{
	if (n <= 1)
		return n;
	int f1, f2, f;
	f1 = 0;
	f2 = 1;

	for(int i = 2; i <= n; i++) {
		f = f1 + f2;
		f1 = f2;
		f2 = f;
	}
	return f;
}
#else
int fibonacci(int n)
{
	if(n <= 1)
		return n;
	return fibonacci(n - 1) + fibonacci(n - 2);
}
#endif
int main()
{
	int n;

	printf("Give me an n: ");
	scanf("%d", &n);

	printf("Fib[%d] : %d\n", n, fibonacci(n));
}
