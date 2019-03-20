/* Title : Print 'X' format
 * Author : Harish
 * Date : 28 Nov
 * Description : no. of lines from user, the string in 'X' format
 */

#include<stdio.h>

int main()
{
	int n;
	printf("Enter the number of lines : ");
	scanf("%d",&n);
	if (n > 31) {                                               // check for range
		printf("No. is out of range\n");
		return 0;
	}

	for(int row = 0; row < n; row++) {
		for(int column = 0; column < n; column++) {
			if ((row == column) || column == (n - row) - 1) {   //check for the rows and columns
				printf("Hello");
			}
			else {
				printf(" ");
				if (n % 2 == 1 && column == n / 2)
					printf(" ");
			}
			if(row == column && column == (n - row) - 1)        // the middle one
				printf("Hello");
		}
		printf("\n");
	}
	return 0;
}



























/*	if(n%2==0)
	{
	i=1; j=n+1;
	}
	else
	{
		i=1;
		j=n;
	}
	printf("\n");
	while(i<=n && j>=1)
	{
		if(i<j)
		{
			int k,space;
			for(int space=1; space<i; space++)
			{
				printf(" ");
			}
			printf(" harish");

			k=j-i;
			for(space=1; space<=k; space++)
			{
				printf(" ");
			}

			printf(" harish");

			printf("\n");
		}

		if(i==j)
		{
			int l;
			if(n%2==0)
			{
				l=2;
			}
			else
			{
				l=1;
			}
	
			for(int k=1; k<=l; k++)
			{
				for(int space=1; space<=i; space++)
				{
					printf(" ");
				}
				printf("harish");
				printf("harish");
				printf("\n");
			}
			printf("\n");
		}

		if(j<i)
		{
			int k;
			for(int space=j; space>=1; space--)
			{
				printf(" ");
			}
			printf(" harish");
			k=i-j;
			for(int space=k; space>=1; space--)
			{
				printf(" ");
			}
			printf(" harish");
		}
		i++;
		j--;
	}
} */

