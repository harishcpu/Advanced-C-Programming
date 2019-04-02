#include <stdio.h>

#if 0
/* A simple scanset example: scanf() will read only the uppercase letters. */
int main()
{
	char str[128];

	printf("Enter a string : ");
	scanf("%[A-Z]s", str);

	printf("You entered : %s\n", str);
}

#elif 0
/* Scanset example with ^ : scanf() will stop reading wherever it finds the character which is mentioned after ^ in %[^ ] */
int main()
{
	char str[128];

	printf("Enter a string : ");
	scanf("%[^o]s", str);

	printf("You entered : %s\n", str);
}
#else 
/* implementation of gets() function using scanset */
int main()
{
	char str[128];

	printf("Enter a string with spaces: ");
	scanf("%[^\n]s", str);

	printf("You entered: %s\n", str);
}
#endif
