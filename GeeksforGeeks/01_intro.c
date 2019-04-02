#if 0
#include <stdio.h>
int main()
{
/*
Accessing Array Elements:
	Array elements are accessed by using an integer index. Array index starts with 0 and goes till size of array minus 1. Following are few examples. 
*/
	int arr[5]; 
	arr[0] = 5; 
	arr[2] = -10; 
	arr[3 / 2] = 2; 	// this is same as arr[1] = 2 
	arr[3] = arr[0]; 
	printf("%d %d %d %d", arr[0], arr[1], arr[2], arr[3]); 
	
	return 0;
}
#elif 0
// This C program compiles fine 
// as index out of bound is not checked in C.
#include <stdio.h>

int main()
{
    /* No Index Out of bound Checking */
    int arr[2];

    printf("%d ", arr[3]);
    printf("%d ", arr[-2]);

    return 0;
}
#elif 0
int main()
{
	/* Also, In C, it is not compiler error to initialize an array with more elements than specified size. For example the below program compiles fine and shows just Warning.*/
	int arr[2] = {10, 20, 30, 40, 50};

	return 0;
}
#elif 1
/*An Example to show that array elements are stored at contiguous locations
C program to demonstrate that array elements are stored 
in contiguous locations .
*/
#include <stdio.h> 
int main() 
{ 
    // an array of 10 integers.  If arr[0] is stored at 
    // address x, then arr[1] is stored at x + sizeof(int) 
    // arr[2] is stored at x + sizeof(int) + sizeof(int) 
    // and so on. 
    int arr[5], i; 
  
    printf("Size of integer in this compiler is %lu\n", sizeof(int)); 
  
    for (i = 0; i < 5; i++) 
        // The use of '&' before a variable name, yields 
        // address of variable. 
        printf("Address arr[%d] is %p\n", i, &arr[i]); 
  
    return 0; 
} 
#endif
