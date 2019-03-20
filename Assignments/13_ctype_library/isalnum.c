#include <stdio.h>

int isalpha(int c);
int isdigit(int c);

int isalnum(int c)
{
	int i;

	i = isalpha(c) || isdigit(c);   //check if the number is an alphabet or a digit
	return i;
	printf("I took over the isalnum function\n");
}
