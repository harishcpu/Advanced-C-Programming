#include "header.h"

int N[8][2] = {0};
int row;
extern int full;

int DispMenu(void *dael)
{
	int n = 0;
	do {
		if (n++ > 0) {
			system("clear");
			printf(BOLDRED "\t\t\t\tMEMORY MANAGER\n" RESET);
		}
		printf(BOLDGREEN "FREE SPACE : " BOLDRED "%d" RESET " byte(s)\n\n", ((64-full)/8));
		puts("1. Add Element");
		puts("2. Remove Element");
		puts("3. Display Elements");
		puts("4. Print Bits");
		puts("5. Exit from the program");

		int choice;
		printf("Your Choice : ");
		scanf("%d", &choice), getchar();
		switch(choice) {
			case 1:
				if (row < 8) {
					*(*(N + row) + 0) = row + 1;
				}
				AddElement(dael);
				++row;
				break;
			case 2:
				RemElement(dael);
				break;
			case 3:
				DispElement(dael, 1);
				break;
			case 4:
				print_bits(dael);
				break;
			case 5:
				printf("Good Bye\n");
				return 0;
			default:
				printf("Wrong Input\n");
				return 0;
		}
	printf("Wanna continue : ");
	} while(getc(stdin) == 'y');
}
