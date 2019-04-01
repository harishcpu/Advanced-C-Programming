#include "header.h"

void edit_menu();

int EditContact(FILE *fileptr)
{
	edit_menu();
	DeleteContact(fileptr, 1);
}

void edit_menu()
{
	system("clear");
	printf(BOLDGREEN "\t\tEDIT CONTACT\n" RESET "\t\t------------\n\n");
	printf("0. Back\n");
	printf("Edit by\n");
	printf("\t1. Name\n");
	printf("\t2. Phone No.\n");
	printf("\t3. Email ID\n");
	printf("\t4. City\n");
	printf("Your Choice: ");
}
