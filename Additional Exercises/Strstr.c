#include <stdio.h>
#include <stdlib.h>

char *StrStr(const char *haystack, const char *needle)
{
        int i;

        while(*haystack)
        {
                if (*haystack == *needle)
                {
                        for (i = 0; *(needle + i) && *(needle +i) == *(haystack + i); ++i);
                        if (*(needle + i) == '\0')
                                return (char *)haystack;
                }
                ++haystack;
        }
        return NULL;
}

int main()
{
        char *haystack, *needle;

        printf("Enter Haystack: ");
        scanf("%m[^\n]s", &haystack);
        getchar();
        printf("Enter Needle: ");
        scanf("%m[^\n]s", &needle);

        char *str = StrStr(haystack, needle);
        if (str != NULL)
                printf("%s\n", str);
        else
                printf("Needle is not found\n");
}
