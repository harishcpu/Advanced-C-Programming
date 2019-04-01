#include "header.h"

int disp_search_menu();
int SearchContact(FILE* fileptr)
{
	int choice;
	char find[MAXLINE];
/*	FILE* fileptr;

	fileptr = fopen("test.csv", "r");						// open file read mode
	if (fileptr == NULL)
		printf("Error: Couldn't open file while Searching Contact\n");
*/
	do {
		disp_search_menu();								//display search menu
		scanf("%d", &choice), getchar();
		switch(choice) {
			case 0 :
				return -1;
				break;
			case 1:									//case1: search by name
				printf("Enter the Name: ");
				while (my_getline(find, 1) == NULL)
					printf("Enter a proper Name\n");
				find_data(find, fileptr, 0);
				break;
			case 2:
				printf("Enter the Phone No.: ");
				while (my_getline(find, 2) == NULL)
					printf("Enter a proper Phone No.\n");
				find_data(find, fileptr, 0);
				break;
			case 3: 
				printf("Enter the Email ID: ");
				while (my_getline(find, 3) == NULL)
					printf("Enter a proper Email ID\n");
				find_data(find, fileptr, 0);
				break;
			case 4: 
				printf("Enter the City: ");
				while (my_getline(find, 4) == NULL)
					printf("Enter a proper City Name\n");
				find_data(find, fileptr, 0);
				break;
			default:
				printf("Invalid Choice\n");
				break;
		}
//		printf("Press 'y' to continue the search : ");
	} while ('\n' == getc(stdin));
}

int disp_search_menu()
{
	system("clear");
	printf(BOLDGREEN "\t\tSEARCH CONTACT\n" RESET "\t\t---------------\n\n");
	printf("0. Back\n\n");
	printf("Search by \n");
	printf("\t1. Name\n");
	printf("\t2. Phone No.\n");
	printf("\t3. Email ID\n");
	printf("\t4. City\n\n");

	printf("Your Choice : ");
}
