/* Title : Replace multiple blanks in a line with a single blank
 * Author : Harish
 * Date : 11 Dec
 * Description : read a line from user, squeeze the line leaving only one space b/w each word.
 */
#include <stdio.h>
#if 1
int main()
{
	char c, lastc;
	printf("Enter the string with two or more spaces in between each word.\n");
	while ((c = getc(stdin)) != EOF) {			/* get a character */
		if (c == ' ') {					/* check if is a space */
			if (lastc != ' ') {			/* avoid consecutive spaces */
				putc(c, stdout);
			}
		} else {
			putc(c, stdout);
		}
		lastc = c;
	}
	return 0;
}

#else 
#define MAX_LINE 100
void mGetline(char* p)
{
	char lastchar;
	while ((*p = getc(stdin)) != EOF) {
		if (*p == ' ') {
			if (lastchar != ' ' && lastchar != '\t')
				putc(*p, stdout);
		} else if (*p == '\t') {
			if (lastchar != ' ' && lastchar != '\t')
				putc(' ', stdout);
		} else {
			putc(*p, stdout);
		}
		lastchar = *p;
	}
}

int main()
{
	char s[MAX_LINE];
	printf("Enter the string with two or more white spaces excluding '\\n' in between each word.\n");
	mGetline(s);
}
#endif
