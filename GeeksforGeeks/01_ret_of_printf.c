#include <stdio.h>

#if 0
int main()
{
	char st[] = "CODING";

	printf("while printing ");
	printf(", the value returned by printf() is : %d\n",
			printf("%s", st));
	return 0;
}
#else
int main()
{
	long int n = 1234567890;

	printf("While printing ");
	printf(", the value retured by printf() is : %d\n", 
			printf("%zu", n));
	return 0;
}
#endif
