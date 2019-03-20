/* Title : CalcMean
 * Author : Harish
 * Date : 18 Dec
 * Description : read array elements from user, print the mean.
 */

#include <stdio.h>
#include <stdlib.h>
#include <strings.h>
#include "colors.h"

double calc_mean(void* ary, int size, int choice)
{
#if 1
	if (choice == 1) {
		for (int i = 1; i < size; i++) 
			*(int *)ary += *((int *)ary + i);
		return (double)(*(short *)ary) / size;
	} else if (choice == 2) {
		for (int i = 1; i < size; i++) 
			*(short *)ary += *((short *)ary + i);
		return (double)(*(short *)ary) / size;
	} else if (choice == 3) {
		for (int i = 1; i < size; i++) 
			*(float *)ary += *((float *)ary + i);
		return (double)(*(float *)ary) / size;
	} else if(choice == 4) {
		for (int i = 1; i < size; i++) 
			*(double *)ary += *((double *)ary + i);
		return (double)(*(double *)ary) / size;
	} else 
		return 0;
#else
	if (choice == 1) {
		if (!(size % 2))
			return (double)((*((int *)ary + ((size / 2) - 1)) + *((int *)ary + (size / 2))) / 2);
		else 
			return (double)(*((int *)ary + (size / 2)));
	} else if (choice == 2) {
		if (!(size % 2))
			return (short)((*((short *)ary + ((size / 2) - 1)) + *((short *)ary + (size / 2))) / 2);
		else 
			return (short)(*((short *)ary + (size / 2)));
	} else if (choice == 3) {
		if (!(size % 2))
			return (double)((*((float *)ary + ((size / 2) - 1)) + *((float *)ary + (size / 2))) / 2);
		else 
			return (double)(*((float *)ary + (size / 2)));
	} else if (choice == 4) {
		if (!(size % 2))
			return (double)((*((double *)ary + ((size / 2) - 1)) + *((double *)ary + (size / 2))) / 2);
		else 
			return (double)(*((double *)ary + (size / 2)));
	} else
		return 0;
#endif
}

int main(int argc, char* argv[])
{
	int mScarr(int* arr, int length);
	int choice, size = atoi(argv[1]);
	void* ary; 

	printf("Choose the type for elements\n");
	printf("1. int\n2. short\n3. float\n4. double\nYour choice : ");
	scanf("%d", &choice);
	printf("Enter the %d elements : \n", size);

	/* read the array elements based on the type chosen */
	switch(choice)
	{
		case 1:		
			ary = (int *)malloc(size * sizeof(int));
			for (int i = 0; i < size; ++i) {
				printf(BOLDRED "["RESET"%d"BOLDRED"]"RESET" -> ", i+1);
				scanf("%d", (int *)ary + i);
				printf("\t"BOLDRED"["RESET"%d"BOLDRED"]"RESET" -> %d\n", i, *((int *)ary + i));
			}
			break;
		case 2:
			ary = (short *)malloc(size * sizeof(short));
			for (int i = 0; i < size; ++i) {
				printf(BOLDRED"["RESET"%d"BOLDRED"]"RESET" -> ", i+1);
				scanf("%hd", (short *)ary + i);
				printf("\t"BOLDRED"["RESET"%d"BOLDRED"]"RESET" -> %hd\n", i, *((short *)ary + i));
			}
			break;
		case 3:
			ary = (float *)malloc(size * sizeof(float));
			for (int i = 0; i < size; ++i) {
				printf(BOLDRED"["RESET"%d"BOLDRED"]"RESET" -> ", i+1);
				scanf("%f", (float *)ary + i);
				printf("\t"BOLDRED"["RESET"%d"BOLDRED"]"RESET" -> %f\n", i, *((float *)ary + i));
			}
			break;
		case 4:
			ary = (double *)malloc(size * sizeof(double));
			for (int i = 0; i < size; ++i) {
				printf(BOLDRED"["RESET"%d"BOLDRED"]"RESET" -> ", i+1);
				scanf("%lf", (double *)ary + i);
				printf("\t"BOLDRED"["RESET"%d"BOLDRED"]"RESET" -> %lf\n", i, *((double *)ary + i));	
			}
			break;
		default:
			printf("Invalid choice\n");
			return 0;
	}
	printf("Mean : %g\n", calc_mean(ary, size, choice));			/* print the mean */
	free(ary);
	return 0;
}
