/* Q. What is use of %n in printf() ?
 *In C printf(), %n is a special format specifier which instead of printing something causes printf() to load the variable pointed by the corresponding argument with a value equal to the number of characters that have been printed by printf() before the occurrence of %n.
*/
#include <stdio.h>

int main()
{
	int c;

	printf("Harish %nKumar G\n", &c);
	printf("%d\n", c);

	return 0;
}
