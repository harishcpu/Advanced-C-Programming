#include <stdio.h>
#include <string.h>

int main()
{
        char str[] = "harish";
        char temp;
       
        for (int i = 0, j = strlen(str)-1; !(i >= j); ++i, --j)
        {
                temp = str[i];
                str[i] = str[j];
                str[j] = temp;
        }
        printf("%s\n", str);
}
