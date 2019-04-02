//#define _POSIX_C_SOURCE 200809L
//#define _GNU_SOURCE
#include <stdio.h>
#if 0
/*printf function is used to print character stream of data on stdout console.*/

/*
 * Syntax :
 * 		int printf(const char* str, ...); 
 */
int main()
{
	/* simply prints on stdout */
	printf("hey harish");
}




#elif 0
/* String print function instead of printing on console store it on char buffer which are specified in sprintf */
/*
 * Syntax:
 * 		int sprintf(char *str, const char *string,...); 
 */
int main()
{
	char buffer[50];
	int a = 10, b = 20, c;
	c = a + b;

	/* sprintf() stores the string "sum of 10 and 20 is 30" into buffer instead of printing on stdout */
	sprintf(buffer, "Sum of %d and %d is %d", a, b, c);

	printf("%s\n", buffer);

	return 0;
}

#else
/* fprintf is used to print the string content in file but not on stdout console. */
/*
 * Syntax:
 *		 int fprintf(FILE *fptr, const char *str, ...);
 */
int main()
{
	int n = 2;
	char str[50];

	/* open file sample.txt in write mode */
	FILE *fptr = fopen("sample.txt", "w");
	if (fptr == NULL) {
		printf("error: Couldn't open file\n");
		return 0;
	}

	for (int i = 0; i < n; i++) {
		puts("Enter a name : ");
		fgets(str, 50, stdin);
				/* writes the string in file */
		fpritnf(fptr, "%d. %s\n", i, str);
	}
	fclose(fptr);

	return 0;
}
#endif
