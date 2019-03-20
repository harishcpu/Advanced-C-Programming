/* Title : Print 'X' format
 * Author : Harish
 * Date : 21 Dec
 * Description : read num from user, print the factorial of num.
 */

#include <stdio.h>

#if 1
int main () 
{
	static int num;
	static int fact = 1;
	static int i = 0;
	if (!i++) {
		printf("Enter the number : ");
		scanf("%d", &num);
	}
	if (num <= 1) {
		i = 0;
		return 1;
	}
	fact = fact * num--;
	main();
	if (!i++)
	printf("factorial : %d\n", fact);
}

























#elif 0
unsigned int factorial(unsigned int n)
{
	if (n <= 1)
		return 1;
	return n * factorial(n - 1);
}
#else 
//https://stackoverflow.com/questions/13948562/recursion-using-main-function
char buf[16];

int main(int argc, char **argv)
{
        int n, rv;

        if (argc < 2) {
                printf("Usage: a.out <value>\n");
                exit(-1);
        }

        n = atoi(argv[1]);
        if (!n) {
                rv = 1;
        } else {
                if (n == 1) {
                    rv = 1;
                } else {
                    char *pt = buf;
                    char **pt2 = &pt - 1;

                    sprintf(buf, "%d", n - 1);
                    rv = main(2, pt2) * n;
                }
        }
        printf("%d\n", rv);

        return rv;
}
#endif
