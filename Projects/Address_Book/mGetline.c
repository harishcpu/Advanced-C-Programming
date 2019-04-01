#include "header.h"

char *my_getline(char s[], int val)
{
	int i = 0;
	while((s[i] = getc(stdin)) != EOF && *(s + i) != '\n')
		i++;
	*(s + i) = '\0';

	int j;
	switch(val) {
		case 1:
			i = 0;
			while (*(s + i)) {
				if (!((*(s + i) >= 65 && *(s + i) <= 90) || (*(s + i) >= 97 && *(s + i) <= 122) || (*(s + i) == 32)))
					return NULL;
				i++;
			}
			break;
		case 2:
			i = 0;
			while (*(s + i)) {
				if (!isdigit(*(s + i)))
					return NULL;
				i++;
			}
			break;
		case 3:
			i = j = 0;
			while (*(s + i)) {
				if (*(s + i) == 46 || *(s + i) == 64)
					j += *(s + i);
				i++;
			}
			if (j != 110)
				return NULL;
			break;
	}
	return s;
}

