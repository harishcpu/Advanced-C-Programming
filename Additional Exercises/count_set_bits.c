#include <stdio.h>

int main()
{
        int count_set_bits(unsigned int n);
        int num;

        printf("Enter a number: ");
        scanf("%d", &num);

        printf("%d\n", count_set_bits(num));
}

int count_set_bits(unsigned int n)
{
        int count = 0;
        while (n)
        {
                if (n & 1u)
                        ++count;
                n >>= 1;
        }
        return count;
}
