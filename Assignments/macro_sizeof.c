/* Title : SIZEOF() - Macro
 * Author : Harish
 * Date : 21 Dec
 * Description : prints the sizes of data types.
*/

#include <stdio.h>

#define SIZEOF(x)\
{\
	long p, q;\
	x = ((p = (long)(&x + 1), q = (long)&x), (p - q));\
}\

int main()
{
	char a;
	int b;
	long int c;
	short int f;
	float d;
	double e;
//	void z;

	SIZEOF(a);
	printf("size of char %d\n", a);
	SIZEOF(f);
	printf("size of short int %d\n", f);
	SIZEOF(b);
	printf("size of int %d\n", b);
	SIZEOF(c);
	printf("size of long int %d\n", (int)c);
	SIZEOF(d);
	printf("size of float %d\n", (int)d);
	SIZEOF(e);
	printf("size of double %d\n", (int)e);
//	SIZEOF(z);
//	printf("size of void %d\n", (int)z);
}
