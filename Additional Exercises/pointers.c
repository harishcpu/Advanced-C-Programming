#include <stdio.h>

/*
int main()
{
	int a = 1025;
	int *p;			//pointers //dereferencing

	p = &a;
	printf("size of integer is %zu\n", sizeof(int));
	printf("Address : %p value : %d \n", p, *p);
}
#elif 0
int main()
{
	int x = 5;
	int* p = &x;
	*p = 6;				// pointer

	int** q = &p;			// pointer to pointer
	int*** r = &q;			// pointer pointer to pointer

	printf("*p = %d\n", *p);
	printf("*q = %p\n", *q);
	printf("**q = %d\n", *(*q));
	
	printf("r** = %p\n", *(*r));
	printf("***r = %d\n", *(*(*r)));

	***r = 10;

	printf("%d\n", x);
}
*/
/*
int increment(int *p)
{
	*p = *p + 1;
}
int main()				// pointers and functions
{
	int a = 10;
	
	increment(&a);			//call by reference
	printf("a = %d\n", a);
}
*/

/*		//########### Arrays as function arguments #############
// Arrays are always taken as reference(address) parameters
int sum_of_elements(int* A)	// "int A" or "int A[]" ..it's the same..
{
	int sum = 0;
	printf("%p\n", A);
	printf("SOE - size of A = %d, size of A[0] = %d\n", (int)sizeof(A), (int)sizeof(*A));
	for (int i = 0; i < (int)(sizeof(A)/sizeof(A[0])); ++i) {
		sum += A[i];	// A[i] is *(A + i)
	}
	return sum;
}
int main()				// pointers and functions
{
	int a[] = {1, 2, 3, 4, 5};
	
//	printf("%p\n", a);		//accessing array's elements and addresses
//	printf("%p\n", &a[0]);
//	printf("%d\n", a[0]);
//	printf("%d\n", *a);

//	for (int i = 0; i < 5; ++i) {
//		printf("address : %p\n", a+i);
//		printf("address : %p\n", &a[i]);
//		printf("value : %d\n", *(a+i));
//		printf("value : %d\n", a[i]);
//	}
//
	printf("size of array : %zu\nlength of the array : %d\n\n", sizeof(a), (int)(sizeof(a)/sizeof(*a)));
				// There is no call by value for arrays(only call by reference)
	printf("Sum of elements : %d\n", sum_of_elements(a));	//"a" can be used for &a[0] (initial address)(address of first element)
	printf("MAIN - size of a = %d, size of a[0] = %d\n", (int)sizeof(a), (int)sizeof(*a));
	printf("%p\n", a);
}
*/

		//################### CHARACTER ARRAYS AND POINTERS ##################
#include <string.h>
void print(const char* s)	// similar to "char s[]"
{				// in "const char* s" const makes the string read only
/*	int i = 0;
	while (s[i] != '\0') {
		putc(s[i++], stdout);
	}
*/				// All are the same since array elements are contiguous.
	int i = 0;
	while (*(s+i) != '\0') {
		putc(s[i++], stdout);
	}

/*	while (*s != '\0') {
		putc(*s, stdout);
		s++;
	}*/
	putc('\n', stdout);

}
int main()
{
	//variety of declaration and definitions of character arrays
/*	char c[6];
	c[0] = 'H';		//each takes 1 byte
	c[1] = 'e';
	c[2] = 'l';
	c[3] = 'l';
	c[4] = 'o';
	c[5] = '\0';
*/
//	char c[6] = {'H', 'e', 'l', 'l', 'o', '\0'};
//	char c[] = "Hello";//a string literal(array of characters) // char c[size] = "Hello"; is also legal, where size = n(any number). NUll termination is implicit in this case.
	char *c = "Hello";	// possible //string gets stored as a compile time constant
	
//NOTE: printf("size of 'size_t' : %zu bytes\n", sizeof(size_t));	// Return type of "strlen()" function is "size_t" and its size is 8 bytes.
	printf("String : %s, Size in bytes : %d, Length : %d\n", c, (int)sizeof(c), (int)strlen(c));
	// '\0'(NULL character) is not ignored by sizeof operator but by functions "strlen()" and in "printf()".
	
	print(c);	// calling print() by referencing base address of "c[]"

	return 0;
}

		//########### POINTERS AND MULTI-DIMENSIONAL ARRAYS #############
		
