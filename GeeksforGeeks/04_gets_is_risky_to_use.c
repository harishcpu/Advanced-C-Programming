#include <stdio.h>

#if 0
int main()
{
	char str[10];
	puts("Enter more than 10 characters: ");

	gets(str);
	printf("%s\n", str);
	return 0;
}

#else
#define MAX_LIMIT 10
int main()
{
	char str[MAX_LIMIT];

	printf("fgets() is accepting only 10 characters from stdin.\n");
	fgets(str, MAX_LIMIT, stdin);
	printf("%s\n", str);
	
	return 0;
}
#endif
