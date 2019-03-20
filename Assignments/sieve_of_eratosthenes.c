/* Title : Primes using Sieve of Eratosthenes 
 * Author : Harish
 * Date : 28 Nov
 * read limit from the user, print all the primes upto the limit 
*/
#include <stdio.h>

int main()
{
	int n;
	printf("Enter the limit(>1 & <100): ");
	scanf("%d",&n);
	if(n < 2 || n > 99) 
	{			//avoid limits which are in out of ranges.
		printf("Invalid Input\n");
		return 0;
	} 
	else 
	{
		int primes[n+1];
		for(int i = 0; i <= n; i++)
			primes[i] = 1;		//make all subscripts holders ones.
		primes[0] = 0;
		primes[1] = 0;
		for(int i = 2; i <= n; i++)
			if(primes[i] == 1) {
				for(int j = 2; i * j <= n; j++)
					primes[i * j] = 0;    //make all non-primes zeros.
			}
		for(int i = 0; i <= n; i++) {
			if(primes[i] != 0)	// print the primes
				printf("%d ",i);
		}
	printf("\n");
	}
}
