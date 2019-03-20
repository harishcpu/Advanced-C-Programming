/* Title : Find the name of a day in a year
 * Author : Harish
 * Date : 27 Nov
 * read day number and name of the first day, print the name of the day of day number.
*/
#include <stdio.h>

int main()
{
	int day, number;
	
	printf("Enter the number: ");
	scanf("%d", &number);		// read the day number
	if(number > 0 && number < 366) 	// check if number is inside the boundary
	{
		printf("1. Sun\n2. Mon\n3. Tue\n4. Wed\n5. Thu\n6. Fri\n7. Sat\n");
		printf("Choose the first day: ");
		scanf("%d", &day);		// read the first day

        //		switch (number % 7 + day - 1)	// find the right name of the day and print it
		int result = (((number % 7) + (day - 1)) % 7);
		if (result == 0)
			result = 7;
		switch (result)
		{
				case 1 :
					printf("Sunday");
					break;
				case 2 :
					printf("Monday");
					break;
				case 3 :
					printf("Tuesday");
					break;
				case 4 : 
					printf("Wednesday");
					break;
				case 5 :
					printf("Thursday");
					break;
				case 6 :
					printf("Friday");
					break;
				case 7:
					printf("Saturday");
					break;
				default :
					printf("Invalid choice");
		}
		printf("\n");
	}
	else 
	{
		printf("Invalid input\n");
	}
	return 0;
}
