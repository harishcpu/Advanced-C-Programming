#include <stdio.h>

int main()
{
        int shifty;

        shifty = 0570;
        shifty = shifty >> 4;
        shifty = shifty << 6;
        printf("The value of shifty is %o\n", shifty);
}
