/* Title : NRPS
 * Author : Harish
 * Date : 21 Dec
 * Description : read the no. of characters, distinct chars from user, print the possible nrps.
*/

#include <stdio.h>
#if 1
#include <string.h>
#include <ctype.h>

#define MAXLEN 100

static char ary[MAXLEN];

/* swaps the characters */
void swap(char *x, char *y)
{
    char temp;
    temp = *x;
    *x = *y;
    *y = temp;
}

/* permute the string to find NRPS*/
void permute(char *a, int l, int r)
{
   int i;
   static int j = 0;
   if (l == r) 
   {
     printf("%s\n", a);
     int k = 0;
     while (*(a + k))
         ary[j++] = *(a + k++);
   }
   else
   {
       for (i = l; i <= r; i++)
       {
          swap((a+l), (a+i));
          permute(a, l+1, r);
          swap((a+l), (a+i));
       }
   }
}

int main()
{
    int nc;
    char str[MAXLEN];

    printf("Enter the characters: ");
    scanf("%s", str);                       /* get the main string */
    printf("Enter the nc to be printed: ");
    scanf("%d", &nc);                       /* get the counted of characters to be printed */

    int n = strlen(str);
    permute(str, 0, n-1);                   /* permute the string */
    printf("The characters you wanted : "); // %20.*s\n", nc, ary);
   
    int i = 0, j = 0;
    while (j < nc) {
        if (isalpha(*(ary + i)))
            putc(*(ary + i++), stdout);
        else
            i = 0;
        ++j;
    }
    putc('\n', stdout);
    return 0;
}






#else 
void gen_nrps(char s[], int in_str_len, int str_length)
{
	int val = 0;
	for (int i = 0; i < str_length; i++) {
		if (i % in_str_len == 0 && i != 0)
			val++;
		if (i > 0 && i % in_str_len == 0)
			putc(' ', stdout);
		printf("%c", *(s + ((i + val) % in_str_len)));
	}
}

int main()
{
	int out_chars, in_chars;

	printf("Enter the number of characters (c): ");
	scanf("%d", &in_chars);
	
	char str[in_chars];
	printf("NOTE: length should be > 1 and < 10.\n");
	do {
		printf("Enter the length of the string (n): ");
		scanf("%d", &out_chars);
	} while (out_chars < 1 && out_chars > 10);


	printf("Enter %d distinct characters : ", in_chars);
	for (int i = 0; i < in_chars; ++i)
		scanf("%c\n", str + i);
	gen_nrps(str, in_chars, out_chars);
	putc('\n', stdout);
	return 0;
}

#endif
