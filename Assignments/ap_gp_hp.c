/* Title : Arithmetic Progression
 * Author : Harish
 * Date : 23 Nov
 * read num, ratio, no. of terms from user, display AP, GP, HP
*/

#include<stdio.h>
//#include<math.h>

// pow is a function in math.h to perform "to the power of" operation in c
// The instructions goes like this
int myPow(int base, int power)
{
 	int x;			//variable used in loop counter
	int number=1;	
 	for(int x=1; x<=power; x++)
 		number *= base;
 	return(number);
}

int main()
{
	int a, r, n;	//a = init number     r = ratio   n = number of terms
	int ap, gp;
	float hp;
	char c;
	do {
		printf("Enter the\nfirst number: ");
		scanf("%d", &a);
		printf("difference/ratio : ");
		scanf("%d",&r);
		printf("number of terms: ");
		scanf("%d",&n), getc(stdin);

		myPow(2, 10);
		if (a < 0 || a > (myPow(2, 10)))
		{ 
			printf("Invalid Input(s)\n");
			return 0;
		}//check if number is in range.

		printf("\n");		
		ap = a;
		printf("Arithmetic Progression :");	// calculate the arithmetic progression
		for (int i=1; i<=n; i++)
		{
			printf(" %d", ap);
			ap = (ap + r);		//1. ap = sum of init number and ratio
		}					//2. ap = ap + r
//		printf("i : %d\n", i);
		gp = a;
		printf("\nGeometric Progression :");	// calculate gp
		for (int i=1; i<=n; i++)
		{
			printf(" %d", gp);
			gp = (gp * r);		// the number multiplied by the common ratio
		}

		hp = a;
		printf ("\nHarmonic Progression :");	// calculate hp
		for(int i=1; i<=n; i++)
		{
			hp = (1 / hp);			//reciprocal of arithmetic progression
			printf(" %22.2f", hp);
			a = ( a + r );
			hp = a;
		}
		printf("\nwanna continue (y/n): ");
	} while ((c = getc(stdin)) == 'y' || c == 'Y');
	return 0;
}
