#include <stdio.h>

int main()
{
	char a[100], b[100], c[100];

	printf("\n First scanf() returns : %d\n", 
			scanf("%s", a));
	printf("\n Second scanf() returns : %d\n",
			scanf("%s%s", a, b));
	printf("\n Third scanf() returns : %d\n",
			scanf("%s%s%s", a, b, c));
	return 0;
}
