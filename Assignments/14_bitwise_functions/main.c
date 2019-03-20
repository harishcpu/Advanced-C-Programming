/* Title : bit manipulation
 * Author : Harish
 * Date : 28 Nov
 * Description : get the required inputs, and print the output
 */
#include <stdio.h>

extern int get_nbits(int num, int bitswanted);
extern int replace_nbits(int num, int val, int n);
extern int get_nbits_from_pos(int num, int , int );
extern int replace_nbits_from_pos(int num, int val, int n, int pos);
extern int toggle_nbits_from_pos(int num, int n, int pos);
extern int print_bits(int num, int n);

int main()
{
	int choice;
	
	printf("Select bit operation from below list\n");
	printf("\t1. get_nbits\n");
	printf("\t2. replace_bits\n");
	printf("\t3. get_nbits_from_pos\n");
	printf("\t4. replace_nbits_from_pos\n");
	printf("\t5. toggle nbits from pos\n");
	printf("\t6. print bits\n");
	printf("Enter your choice : ");
	scanf("%d", &choice);

	int num1, bitswanted;
	int dec_eq;
	int num2, pos;

	printf("Enter the num : ");
	scanf("%d", &num1);
	if (choice != 6) {
	printf("%d : ", num1);
	print_bits(num1, 16);
	}
	printf("\nNo. of bits : ");
	scanf("%d", &bitswanted);
	
	switch (choice)
	{
	case 1:
		dec_eq = get_nbits(num1, bitswanted);
		printf("\nDecimal equivalent of the above %d bits : %d\n", bitswanted, dec_eq);
		print_bits(dec_eq, 16);
		break;
	case 2:
		printf("Enter the value : ");
		scanf("%d", &num2);
		printf("%d : ", num2);
		print_bits(num2, 16);
	
		dec_eq = replace_nbits(num1, num2, bitswanted);
		printf("\nAfter shifting the %d bits from LSB of %d to LSB of %d you'll get: %d\n", bitswanted, num2, num1, dec_eq);
		print_bits(dec_eq, 16);
		break;
	case 3:
		printf("position : ");
		scanf("%d", &pos);
		dec_eq = get_nbits_from_pos(num1, bitswanted, pos);
		printf("\nThe decimal equivalent is : %d\n", dec_eq);
		print_bits(dec_eq, bitswanted);
		break;
	case 4:
		printf("The value : ");
		scanf("%d", &num2);
		printf("%d : ", num2);
		print_bits(num2, 16);

		printf("\nThe position : ");
		scanf("%d", &pos);
		dec_eq = replace_nbits_from_pos(num1, num2, bitswanted, pos);
		printf("\nAfter shifting the %d bits from LSB of %d to the position %d of %d you'll get: %d\n", bitswanted, num2, pos, num1, dec_eq);
		print_bits(dec_eq, 32);
		break;
	case 5:
		printf("Enter the position (Indexed '0') : ");
		scanf("%d", &pos);
		
		dec_eq = toggle_nbits_from_pos(num1, bitswanted, pos-bitswanted+1);
		printf("return value : %d\n", dec_eq);
		print_bits(dec_eq, 32);
		break;
	case 6:
		printf("%d : ", num1);
		print_bits(num1, bitswanted);
		break;
	default :
		printf("Invalid Choice\n");
	}
	putc('\n', stdout);
}
