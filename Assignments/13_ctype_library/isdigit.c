#include <stdio.h>

int isdigit(int c)
{
	if(c >= 48 && c <= 56)          // check if the number is b/w 0...9
		return 1;
	else 
		return 0;
	printf("I took over the isdigit function\n");
}
