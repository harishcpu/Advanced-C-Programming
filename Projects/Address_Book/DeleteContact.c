#include "header.h"

void delete_menu();

int DeleteContact(FILE* fileptr, int edit)
{
	int choice, ch;
	char line_no, find[MAXLINE];
//	FILE* fileptr = fopen("test.csv", "r");

	int key = 1;
	if (edit)
		key = 2;
	do {
		if (!edit)
			delete_menu();
		scanf("%d", &choice), getchar();
		int i = 0;
		switch(choice) {
			case 0 :
				return -1;
				break;
			case 1:			//case1: search by name
				printf("Enter the Name: ");
				while (!my_getline(find, 1))
					printf("Enter a proper Name\n");
				find_data(find, fileptr, key);
				break;
			case 2:
				printf("Enter the Phone No.: ");
				while (my_getline(find, 2) == NULL)
					printf("Enter a proper Phone No.\n");
				find_data(find, fileptr, key);
				break;
			case 3: 
				printf("Enter the Email ID: ");
				while (my_getline(find, 3) == NULL)
					printf("Enter a proper Email ID\n");
				find_data(find, fileptr, key);
				break;
			case 4: 
				printf("Enter the City: ");
				while (my_getline(find, 4) == NULL)
					printf("Enter a proper City Name\n");
				find_data(find, fileptr, key);
				break;
/*			case 5:
				printf("Enter the line number : ");
				scanf("%c", &line_no);
				find_data(&line_no, fileptr, 1);
				break;
*/			default:
				printf("Invalid Choice\n");
				break;
		}
	} while ('y' == getc(stdin));
	return -1;
}

void delete_menu()
{
	system("clear");
	printf(BOLDGREEN "\t\tDELETE CONTACT\n" RESET "\t\t------------\n\n");
	printf("0. Back\n");
	printf("\nDelete By\n");
	printf("\t1. Name\n");
	printf("\t2. Phone No.\n");
	printf("\t3. Email ID\n");
	printf("\t4. City\n\t5. S.No.\n");
	printf("Your Choice: ");
}
