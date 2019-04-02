#include <stdio.h>

int main()
{
        int num, num1 = 0, n;

        printf("Enter a number: ");
        scanf("%d", &num);

        while(num)
        {
                n = num % 10;
                num1 = n + (num1 * 10);
                num = num / 10;
        }
        printf("%d\n", num1);
}
