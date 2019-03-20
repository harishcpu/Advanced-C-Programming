/* Title : C type Library
 * Author : Harish
 * Date : 03 Dec
 * Description : get a character from user, prints its nature.
 */

#include <stdio.h>

extern int isalnum(int );
extern int isalpha(int );
extern int isdigit(int );			// functions prototypes
extern int isblank(int );
extern int print_line(char s[], int c, int i);

int main()
{
	char c; 
	int n, i;

	printf("Enter the character : ");
	scanf("%c", &c);
	printf("select any option:\n");
	printf("1 - isalnum\n2 - isalpha\n3 - isdigit\n4 - isblank\n");
	printf("Enter your choice :");
	scanf("%i", &n);

	if(n == 1) {
		i = isalnum(c);			// check if isalnum()
		print_line("alnum", c, i);
	}
	if(n == 2) {
		i = isalpha(c);			// check if isalpha()
		print_line("alpha", c, i);
	}
	if(n == 3) {
		i = isdigit(c);			// check if isdigit()
		print_line("digit", c, i);
	}
	if(n == 4) {
		i = isblank(c);			// check if isblank()
		print_line("whitespace", c, i);
	}
	else if(n != 1 && n != 2 && n != 3 && n != 4)
		printf("choose a valid option\n");

	return 0;
}


int print_line(char s[], int c, int i)
{
	if(i == 1)
		printf("The character '%c' is a(n) %s character.\n", c, s);
	else
		printf("The character '%c' is not a(n) %s character.\n", c, s);
	return 0;
}
