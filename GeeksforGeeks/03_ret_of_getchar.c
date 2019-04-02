/* Q. What is return type of getchar(), fgetc() and getc() ?
 * 
 * ANS. In C, return type of getchar(), fgetc() and getc() is int (not char). So it is recommended to assign the returned values of these functions to an integer type variable.
*/
#include <stdio.h>

#if 1
int main()
{
	char ch;
	while ((ch = getchar()) != EOF)
		putchar(ch);
}

#else 
int main()
{
	int in;
	while ((in = getchar()) != EOF)
		putchar(in);
}
#endif
