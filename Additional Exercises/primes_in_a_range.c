#include <stdio.h>

int main()
{
        void primes_in_a_range(int , int );
        int begin, end;

        printf("Enter the range (ex: 1 10): ");
        scanf("%d %d", &begin, &end);

        primes_in_a_range(begin, end);
}

void primes_in_a_range(int begin, int end)
{
        int i, flag;

        for ( ; begin <= end; ++begin)
        {
                flag = 0;
                for (i = 2; i < begin; ++i)
                        if (!(begin % i))
                                flag = 1;
                if (!flag)
                        printf("%d ", begin);
        }
        putc('\n', stdout);
}
