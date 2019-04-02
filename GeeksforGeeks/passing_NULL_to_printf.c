/* Q. What should be the output if I pass NULL to printf in C ?
 *
 * Ans: 
 *According to Section 7.1.4(of C99 or C11): Use of library functions.
 *If an argument to a function has an invalid value (such as a value 
 outside the domain of the function, or a pointer outside the address 
 space of the program, or a null pointer, or a pointer to non-modifiable 
 storage when the corresponding parameter is not const-qualified) or a 
 type (after promotion) not expected by a function with variable number 
 of arguments, the behavior is undefined. */
/* Some compilers may produce null while others Segmentation Fault. GCC prints (null). */

#include <stdio.h>

int main()
{
	char *p = NULL;

	printf("%s", p);
//	puts(p);
}
