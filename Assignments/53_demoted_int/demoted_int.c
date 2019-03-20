/* Title : Demoted Int
 * Author : Harish
 * Date : 20 Nov
 * Description : get a float number from user, print it demoted equivalent of int
 */
#include <stdio.h>

int MyPow(int base, int power);

int main()
{
    float f;

    printf("Enter a float: ");
    scanf("%f", &f);
    
    /* yeilds the number of bits */
    int nb = (((*((int *)&f) & (-1u >> 1)) >> 23) - 127);
    /* prints the demoted equivalent */
    printf("%d\n",  (((-1u >> 9) & *(int *)&f)  >> 23 - nb) + MyPow(2, nb));   

    return 0;
}
