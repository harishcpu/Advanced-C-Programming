/* Title : strcmp(), strcasecmp()
 * Author : Harish
 * Date : 21 Dec
 * Description : get a string, print the integer
 */

#include <stdio.h>

#if 1
#define MAXLEN 100
int myStrCmp(const char* s1, const char* s2)
{
	while (*s1 && (*s1 == *s2))
		++s1, ++s2;			// wiki implementation of strcmp()
	return *(const unsigned char*)s1 - *(const unsigned char*)s2;
}

int myStrCaseCmp(const char* s1, const char* s2)
{
	int as1, as2;
	while (*s1 && *s2) {
		if (*s1 >= 97 && *s1 <= 122)
			as1 = *s1 - 97;
		else if (*s1 >= 65 && *s1 <= 90)
			as1 = *s1 - 65;
	
		if (*s2 >= 97 && *s2 <= 122)
			as2 = *s2 - 97;
		else if (*s2 >= 65 && *s2 <= 90)
			as2 = *s2 - 65;

		if (as1 != as2)
			return as1 - as2;
		else
			++s1, ++s2;
	}
}

void myGetline(char* s)					//read line from stdin
{
	while((*s = getc(stdin)) != '\n' && *s++ != EOF);
	*s = '\0';
}

int main ()
{
	int i;
	char s1[MAXLEN], s2[MAXLEN];
	
	printf("Enter string 1 : ");
	myGetline(s1);					//get string 1
	printf("Enter string 2 : ");
	myGetline(s2);					//get string 2

	printf("\nEntered string strings : \n");
	printf("string 1 : %s\n", s1);		
	printf("string 2 : %s\n", s2);	

	printf("\n1. myStrCmp\n2. myStrCaseCmp\nYour choice : ");
	char ch = getc(stdin);
	if ('1' == ch)
		i = myStrCmp(s1, s2);				//call myStrCmp()
	else if ('2' == ch)
		i = myStrCaseCmp(s1, s2);			//call myStrCaseCmp()
	else
		return 0;

	printf("return value : %d\n", i);
	if (i == 0) {
		printf("Strings are equal\n");
	} else if (i > 0) {
		printf("(s2 < s1)String 1 is greater than String 2\n");
	} else if (i < 0) {
		printf("(s1 < s2)String 2 is greater than String 1\n");
	}
}

#else

#include <string.h>
#include <strings.h>
#define MAXLEN 100
void myGetline(char* s)
{
	while((*s = getc(stdin)) != '\n' && *s++ != EOF);
	++(*s);
	*s = '\0';
}

int main()
{
	int i;
	char s1[MAXLEN], s2[MAXLEN];
	
	printf("Enter string 1 : ");
	myGetline(s1);
	printf("Enter string 2 : ");
	myGetline(s2);

	printf("Entered string strings : \n");
	printf("string 1 : %s\n", s1);
	printf("string 2 : %s\n", s2);

//	i = strcmp(s1, s2);
	i = strcasecmp(s1, s2);
//
	printf("%d\n", i);
	if (i == 0) {
		printf("Strings are equal\n");
	} else if (i > 0) {
		printf("(s2 < s1)String 1 is greater than String 2\n");
	} else if (i < 0) {
		printf("(s1 < s2)String 2 is greater than String 1\n");
	}
}
#endif
