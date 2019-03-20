#include <stdio.h>

int isblank(int c)
{
	if(c == 32 || c == 9 || c == 10)    //check if the number is a white space character
		return 1;
	else
		return 0;
	printf("I took over the isblank function.\n");
}
