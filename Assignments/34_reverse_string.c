/* Title : Sort float store
 * Author : Harish
 * Date : 18 Dec
 * Description : read floats from user, print the elements in order
 */

#include <stdio.h>

#define MAX_LEN 100

void reverse(int i, char s[])
{
	if (i >= 0) {
		putc(s[--i], stdout);
		reverse(i, s);
	}
}

int main()
{
	char string[MAX_LEN];
	int i;

	printf("Enter a string : ");
	for (i = 0; i < MAX_LEN && (string[i] = getc(stdin)) != EOF && string[i] != '\n'; ++i);
	string[++i] = '\0';
	
	putc('\n', stdout);
	printf("1. Normal reverse\n2. Recursive reverse\nYour choice : ");
	if ('2' == getc(stdin)) {
		printf("Reversed string : ");
		reverse(--i, string);
		putc('\n', stdout);
		return 0;
	} else {
		printf("Reversed string : ");
		for (i--, i--; i >= 0; --i)
			putc(string[i], stdout);
	}
	putc('\n', stdout);
}
