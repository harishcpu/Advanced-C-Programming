#include <stdio.h>

#if 0
/* NOTE: puts(str) moves the cursor to next line.*/
int main()
{
	puts("Harish");
	puts("Kumar");

	return 0;
}

#elif 0
/* If you do not want the cursor to be moved to next line, then you can use fputs(str, stdout) */
int main()
{
	fputs("Harish", stdout);
	fputs("Kumar", stdout);

	return 0;
}

#elif 0
int main()
{
	/* %s is intentionally put here to see the side effect of using printf(str) */
	printf("He Look%s at yo%s");

	return 0;
}

#else
int main()
{
	puts("He look%s at yo%s");

	return 0;
}
#endif
