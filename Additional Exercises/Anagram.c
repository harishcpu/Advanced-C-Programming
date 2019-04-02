#include <stdio.h>
#include <string.h>

void Sort(char *a, int len)
{
        int i, j;
        char temp;
        for (i = 0; i < len; ++i)
        {
                for (j = i; j < len; ++j)
                {
                        if (a[i] > a[j])
                        {
                                temp = a[i];
                                a[i] = a[j];
                                a[j] = temp;
                        }
                }
        }
}

int main()
{
        #define ANAGRAM 0
        #define NOT_ANAGRAM 1
        #define MAXLEN 20

        int AreAnagram(char *, char *);

        char a[MAXLEN], b[MAXLEN];

        printf("Enter 1st string: ");
        scanf("%[^\n]s", a); getchar();
        printf("Enter 2nd string: ");
        scanf("%[^\n]s", b);

        if (ANAGRAM == AreAnagram(a, b))
                printf("\nBoth strings %s & %s are ANAGRAMS\n", a, b);
        else
                printf("\nBoth strings %s & %s are NOT ANAGRAMS\n", a, b);
        return 0;
}

int AreAnagram(char *str1, char *str2)
{
        if (strlen(str1) != strlen(str2))
                return NOT_ANAGRAM;
        Sort(str1, strlen(str1));
        Sort(str2, strlen(str2));

        char ch;
        while ((ch = *str1++) != '\0' && ch == *str2++);
        if (*str1 != '\0' && *str2 != '\0')
                return NOT_ANAGRAM;
        return ANAGRAM;
}
