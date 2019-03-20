#include <stdio.h>

int isalpha(int c)
{
	if(c >= 65 && c <= 90 || c >= 97 && c <= 122)   //check if the number is an alphabet. Refer ascii
		return 1;
	else
		return 0;
	printf("I took over the isalpha function\n");
}
