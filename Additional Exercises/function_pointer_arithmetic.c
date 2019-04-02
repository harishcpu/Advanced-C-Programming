#include <stdio.h>

int main()
{
        int f1();
        int f2();
        int f3();

        int n = 3, sum = 0;

        int (*f[])() = {f1, f2, f3};

        for (int i = 0 ; i < n; ++i)
        {
                printf("f%d(); %d\n", i+1, *(int *)f[i]);
        }
        printf("sum: %d\n", sum);
}

int f1()
{
        return 10;
}
int f2()
{
        return 20;
}
int f3()
{
        return 30;
}
