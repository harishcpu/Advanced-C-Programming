#if 1
#include <stdio.h>
#include <string.h>

void reverse(char **string, int begin, int end)
{
        char temp;

        if (begin >= end) 
                return;

        temp = (*string)[begin];
        (*string)[begin] = (*string)[end];
        (*string)[end] = temp;
        reverse(string, ++begin, --end);
}

int main()
{
        char str[] = "harish";
        char *ptr = str;

        reverse(&ptr, 0, strlen(str)-1);
        printf("%s\n", str);
}

#else
#include <stdio.h>
#include <string.h>

void reverse(char *x, int begin, int end)
{
    char c;

    if (begin >= end)
	return;

    c          = *(x+begin);
    *(x+begin) = *(x+end);
    *(x+end)   = c;

    reverse(x, ++begin, --end);
}

int main()
{
    char str[1000];

    printf("Enter a string: ");
    gets(str);

    reverse(str, 0, strlen(str)-1);

    printf("Reversed string is: %s\n", str);

    return 0;
}
#endif
