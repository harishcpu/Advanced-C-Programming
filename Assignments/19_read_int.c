/* Title : Read Int
 * Author : Harish
 * Date : 21 Dec
 * Description : get a string, print the integer
 */

#include <stdio.h>

#if 0
#include <stdlib.h>
#define MAX_LEN 11
int main()
{
	char s[MAX_LEN];
	int num;

	printf("Enter a number : ");
	fgets(s, 11, stdin);

	num = atoi(s);
	printf("The number is %d\n", num);
}

#else
#include <stdlib.h>

#define MAXLEN  31

void my_getline(char* s)
{
	while ((*s = getc(stdin)) != '\n' && *s++ != EOF);
	*s = '\0';
}

int my_atoi(char* ptr)
{
	int n = 0, sign;
	while (*ptr != '\0' && *ptr != EOF) {
		if (*ptr == '-') {
			sign = 1;
			*ptr++;
			continue;
		} else if (*ptr == '.') {
			printf("This contains decimal point. Integer conversion not possible.\n");
			return 0;
		} else if (*ptr >= 'a' && *ptr <= 'z' || *ptr >= 'A' && *ptr <= 'Z') {
			printf("This contains alphabets. Integer conversion is not possible.\n");
			return 0;
		}

		n = n * 10 + *ptr++ - '0';
	}
	if (sign == 1) {
		printf("You entered a signed number\n");
		n = 1 + ~n;
	} else {
		printf("You entered an unsigned number\n");
	}
	return n;
}

int main()
{
	char c[MAXLEN];
	unsigned int n;
	my_getline(c);

	if ((n = my_atoi(c)) != 0)
		printf("Integer : %hhu\n", n);
	else
		exit(1);
	return 0;
}
#endif
