#include <stdio.h>

void reverse(char *first, char *last)
{
	char temp;
	while (first < last) {
		temp = *first;
		*first++ = *last;
		*last-- = temp;
	}
}
void ReverseWords(char *s)
{
	char *Begin = NULL;
	char *temp = s;

	while (*temp) {
		if (Begin == NULL && *temp != ' ')
			Begin = temp;
		if (Begin && (*(temp + 1) == ' ' || *(temp + 1) == '\0')) {
			reverse(Begin, temp);
			Begin = NULL;
		}
		temp++;
	}
	reverse(s, temp-1);
}


int main()
{
	char line[100];
	
	scanf("%[^\n]s", line);
	
	ReverseWords(line);

	printf("%s\n", line);
}
