/* Title : Endianness
 * Author : Harish
 * Date : 21 Dec
 * Description : print the endianness of the processor
 */

#include <stdio.h>

int endian(int n)
{
	char *ptr;
	ptr = (char *) &n;			// get a byte from the number

	return *ptr;
}

int main()
{
	int num;
	char *ptr;

	printf("Enter a number : ");
	scanf("%x", &num);

//	printf("%hhx\n", endian(num));		// print the returned number
	if (endian(num) == *(char *)&num)
		printf("Little Endian\n");
	else
		printf("Big endian");
}
