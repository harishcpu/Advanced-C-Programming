/* Title : signed odd or even 
 * Author : Harish
 * Date : 22 Nov
 * Description : read num, print whether it's +ve or -ve even or odd
 */
#include<stdio.h>

int main()
{
	int num;
	
	int i = 1;
	while(i) {
		printf("Enter a number: ");
		scanf("%d",&num);

		/* check if num is negative and is even or odd */
		if(num < 0) {
			if (num % 2 != 0)
				printf("This number is a -ve odd number\n");
			else
				printf("This is a -ve even number\n");
		} else if (num > 0) { /* check if num is positive and is even or odd */
			if(num % 2 == 0)
				printf("This number is a +ve even number\n");
			else
				printf("This is a +ve odd number\n");
		} else if (num == 0) /* check is number is zero */
			printf("This is a +ve even number\n");
	}
}	
	











/*
	
		getchar();
		printf("\nDo you wanna continue(Y/N) : ");
		scanf("%c",&c);
		if( c=='y' || c=='Y' ) {
			continue;
		} else {
			i=0;
			break; 
		}
	}

 */
