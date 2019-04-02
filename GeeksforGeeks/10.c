#include <stdio.h>

int top;

int fun()
{
        char a[] = {'a', 'b', 'c', '(', 's'};
        return a[top++];
}
int main()
{
        char b[10];
        char ch;
        int i = 0;
        while (ch = fun() != '(')
                b[i++] = ch;
        printf("%s\n", b);
        return 0;
}
