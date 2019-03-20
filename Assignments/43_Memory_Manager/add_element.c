#include "header.h"


int count, full, float_pos, ary[8] = {0};

int AddElement(void *Mem)
{
	int choice;

	if (full > 56) {
		printf("Memory is full\n");
		return 0;
	}
	system("clear");
	printf("\t\t" BOLDMAGENTA "ADD AN ELEMENT\n" RESET);
	printf("Enter the type you have to insert :\n");
	printf("1. int\n2. char\n3. float\n4. double\nYour choice : ");
	scanf("%d", &choice), getchar();

	int num1; char num2; float num3; double num4;
	unsigned long mask1, mask2;
//	printf("count : %d\n", count+1);
	switch(choice)
	{
		case 1:
			printf("Enter the int : ");
			scanf("%d", &num1), getchar();
			print_bits(Mem);
			*(long int *)Mem |= ((long int)num1 << full);
			print_bits(Mem);
			full += 32;
			*(ary + count++) = choice;
			*(*(N + row) + 1) = 32;
//			printf("row column : %d %d\n", *(*(N + row) + 0), *(*(N + row) + 1));
			break;
		case 2:
			printf("Enter the char : ");
			scanf("%c", &num2), getchar();
			print_bits(Mem);
			*(long int *)Mem |= ((long int)num2 << full);
			print_bits(Mem);
			full += 8;
			*(ary + count++) = choice;
			*(*(N + row) + 1) = 8;
//			printf("row column : %d %d\n", *(*(N + row) + 0), *(*(N + row) + 1));
			break;
		case 3:
			printf("Enter the Float :");
			scanf("%f", &num3), getchar();
			
			print_bits(Mem);	
			mask1 = (unsigned)-1 >> 9;
			mask2 = -1 << 23;

//			printf("full : %d\n", full);
//			print_bits(&mask1);
//			print_bits(&mask2);

			mask1 &= *(int *)&num3;
			mask2 &= *(int *)&num3;
			
			mask1 = mask1 << full;
			mask2 = mask2 << full;
			
//			print_bits(&mask1);
//			print_bits(&mask2);

			*(long int *)Mem |= mask1;
			*(long int *)Mem |= mask2;
			print_bits(Mem);
			if (full >= 32)
				float_pos = 1;
			full += 32;
			*(ary + count++) = choice;
			*(*(N + row) + 1) = 32;
//			printf("row column : %d %d\n", *(*(N + row) + 0), *(*(N + row) + 1));
			break;
		case 4:
			printf("Enter the Double : ");
			scanf("%lf", &num4), getchar();
			print_bits(Mem);
			mask1 = -1;
			mask1 &= *(long int *)&num4;
			*(long int *)Mem |= mask1;
			print_bits(Mem);
			full += 64;
			*(ary + count++) = choice;
			*(*(N + row) + 1) = 64;
//			printf("row column : %d %d\n", *(*(N + row) + 0), *(*(N + row) + 1));
			break;
		default:
			fprintf(stderr, "Invalid Input\n");
			break;
	}
	return 1;
}
