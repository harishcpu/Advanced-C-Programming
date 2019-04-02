#include <stdio.h>

int main()
{
        unsigned int reverse_bits(int );
        int num;

        printf("Enter a number: ");
        scanf("%d", &num);
        printf("%u\n", reverse_bits(num));
}

unsigned int reverse_bits(int num)
{
        unsigned int x = 0;

        int mask = 1;
        for (int i = 31; i >= 0; --i)
        {
                x |= (!!(num & mask)) << i;
                mask <<= 1;
        }
        return x;
}
