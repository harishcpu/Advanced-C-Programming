#include <stdio.h>
#include <string.h>
int main()
{
        char a[20];
        printf("Palindrome:\nEnter a string: ");
        scanf("%[^\n]s", a);

        int len = strlen(a) - 1;
        for (int i = 0, j = len; i < j && i != j; ++i, --j)
        {
                if (a[i] != a[j])
                {
                        printf("Not a palindrome\n");
                        return 0;
                }
        }
        printf("Is a palindrome\n");
        return 0;
}
