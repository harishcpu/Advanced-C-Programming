/* Title : MyStrStr
 * Author : Harish
 * Date : 18 Dec
 * Description : read the haystack & needle, print the string from where the needle is found.
 */

#include <stdio.h>
#include "colors.h"

#define MAX_LEN 100

//char* myStrStr(const char *haystack, const char *needle)
char* myStrStr(const char *haystack,const char *needle)
{
	int i;
	char *begin, *pattern;
	begin = haystack;
	pattern = needle;

	while (*begin != '\0') {
		if (*begin == *pattern) {			//if first character of "needle" matches, check for whole string
			for (i = 0; *(pattern + i) != '\0' && *(begin + i) == *(pattern + i); ++i);
			if (*(pattern + i) == '\0')
                                return begin;				//if complete "needle" found, return the beginning address of needle in haystack
		}
		++begin;					//increment main string if match not found	
	}
	return NULL;
}

void myGetline(char* s)
{
	int i = 0;
	while (i < MAX_LEN && (*(s + i++) = getc(stdin)) != '\n' && *s != EOF);
	*(s + i) = '\0';
}

int main()
{
	char line[MAX_LEN], match[MAX_LEN];

	printf("\nEnter " BOLDRED "HayStack" RESET "(mainStr): ");
	myGetline(line);

	printf("Enter " BOLDRED "Needle" RESET "(subStr): ");
	myGetline(match);
	
	printf(BOLDRED "\nOUTPUT:" RESET " %s\n", myStrStr(line, match));
}
