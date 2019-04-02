#include <stdio.h>

#if 1
/* Program to print % */
int main()
{
	printf("%%");		// prints %

	puts("");		// for newline character.
}

#else
/* These also work */
int main()
{
	printf("%c", '%');
	puts("");

	printf("%s", "%"); 
	puts("");
}
#endif
