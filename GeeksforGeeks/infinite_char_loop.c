#include <stdio.h>

/* interesting infinte loop using characters in C */
int main()
{ 
    char i; 
    for(i = 0; i < 128; i++)
    { 
        printf("I am %d\n", i);
	for(int j=0; j < 10000; j++) 
      		for(int k=0; k < 1000; k++);
    } 
    return 0; 
}

/* Do you think the printf() statement will be executed 128 times. NOPE. */
