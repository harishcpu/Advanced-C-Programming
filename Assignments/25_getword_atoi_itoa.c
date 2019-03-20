/* Title : Getword, atoi, itoa
 * Author : Harish
 * Date : 21 Dec
 * Description : get a string, print the integer
 */

#include <stdio.h>

#define MAX_LEN 12
#define SIGN(x) (x == '+'? 1 : -1);

int getword(char *s);
int atoi(const char *s);
int itoa(int num, char *s);

int main()
{
	char str[MAX_LEN];
	int choice;


	printf("1. get_word\n2. atoi\n3. itoa\nYour choice : ");
	scanf("%d", &choice);
	getc(stdin);
	switch(choice) 
	{
		int i;
		case 1:
			printf("Enter the word : ");
			i = getword(str);
			printf("String    length \n-------   ------\n%s        %d\n", str, i);
			break;
		case 2:
			printf("Enter the numeric string : ");
			getword(str);
			printf("After converting string to a INTEGER :  %d\n", atoi(str));
			break;
		case 3:
			printf("Enter the numeric string : ");
			i = getword(str);
			itoa(atoi(str), str);
			printf("After converting int to a STRING :\nString     length     itoa();\n");
			printf("-------     -------     -----------\n%s        %d          %s\n", str, i, str);
			break;
		default :
			printf("Invalid choice\n");
	}
	return 0;
}

int getword(char s[])
{
	int i;

	for(i = 0; i < MAX_LEN && (s[i] = getc(stdin)) != '\n' && s[i] != ' ' && s[i] != EOF; ++i);
	s[i] = '\0';

	return i;
}

int atoi(const char s[])
{
	int i, sign = 1, num;

	printf("Converting string to integer...\n");

 	for (i = 0; s[i] == ' ' || s[i] == '\n' || s[i] == '\t'; ++i); /*skip whitespaces*/
	
	if (s[i] == '+' || s[i] == '-') {
	sign = SIGN(s[i++]); 			/* check for sign using macro SIGN*/
//	sign = (s[i++] == '+' ? 1 : -1);
	}
	
	for (num = 0; s[i] >= '0' && s[i] <= '9'; ++i)
		num = num * 10 + s[i] - '0';
	return (sign * num);
}

int itoa(int num, char s[])
{
	int i, sign;

	printf("\nConverting integer to string...\n");

	i = 0;
	if ((sign = num) < 0) {
		num = -num; 
	}

	do {
		s[i++] = num % 10 + '0';
	} while ((num /= 10) > 0);
	
	if (sign < 0) {
		s[i++] = '-';
	} s[i] = '\0';

	for (int j = 0, k = i-1; j <= k; ++j, --k) {
		char c;
		c = s[j], s[j] = s[k], s[k] = c;
	}

	return i;
}
