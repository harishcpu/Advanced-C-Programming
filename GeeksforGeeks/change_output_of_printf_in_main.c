/* How to change the output of printf() in main() ? */
#include <stdio.h>

void fun()
{	/*We can use Macro Arguments to change the output of printf.*/
	#define printf(x, y) printf(x, 10);
}

int main()
{
	int i;
	
	fun();
	
	i = 50;
	printf("%d\n", i);

	return 0;
}
