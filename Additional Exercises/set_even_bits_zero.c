#include <stdio.h>

int main()
{
        int num;

        printf("Enter a number: ");
        scanf("%d", &num);

        int temp = 0;
        for (int i = sizeof(int) * 8 - 1; i >= 0; --i)
        {
                if (i % 2)
                        temp |= (!!((num >> i) & 1) << i);
        }
        printf("%d - %d\n", num, temp);
}
