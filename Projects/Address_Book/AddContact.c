#include "header.h"

int disp_addmenu(char *, char *, char *, char *);

int AddContact(FILE *fptr)
{
	char choice;
	char *str;
	char name[MAXLINE] = {'\0'}, ph_no[MAXLINE] = {'\0'}, email[MAXLINE] = {'\0'}, city[MAXLINE] = {'\0'};

	disp_addmenu(name, ph_no, email, city);					/* display the AddContact menu */

	while ((choice = getc(stdin)) >= '0' && choice <= '9') {
		getc(stdin);
		switch(choice) {
			case '0':
				return -1;
			case '1':					/* Add name */
                system("clear");
	            disp_addmenu(name, ph_no, email, city);
				printf("Enter Name : ");
				str = my_getline(name, 1);
				while (str == NULL) {
					printf("Name contains invalid characters\n");
					printf("Enter a proper Name : ");
					str = my_getline(name, 1);
				}
				fprintf(fptr, "%s,", name);
                system("clear");
	            disp_addmenu(name, ph_no, email, city);
				break;
				
			case '2':					/* Add Phone Number */ 
                system("clear");
	            disp_addmenu(name, ph_no, email, city);
				printf("Enter Phone No. : ");
				str = my_getline(ph_no, 2);
				while (str == NULL) {
					printf("Phone no. contains invalid characters\n");
					printf("Enter a proper Phone No. : ");
					str = my_getline(ph_no, 2);
				}
				fprintf(fptr, "%s,", ph_no);
                system("clear");
	            disp_addmenu(name, ph_no, email, city);
				break;

			case '3':					/* Add email address*/
                system("clear");
	            disp_addmenu(name, ph_no, email, city);
				printf("Enter Email : ");
				str = my_getline(email, 3);
				while (str == NULL) {
					printf("An email id should contain \"@\" and \".\" character.\n");
					printf("Enter a proper Email : ");
					str = my_getline(email, 3);
				}
				fprintf(fptr, "%s,", email);
                system("clear");
	            disp_addmenu(name, ph_no, email, city);
				break;

			case '4':					/* Add City */
                system("clear");
	            disp_addmenu(name, ph_no, email, city);
				printf("Enter Native City : ");
				str = my_getline(city, 4);
				fprintf(fptr, "%s\n", city);
                system("clear");
	            disp_addmenu(name, ph_no, email, city);
				break;

			case '5':
//				fprintf(fptr, "%s \t %s \t %s \t %s\n", name, ph_no, email, city);
//				fprintf(fptr, "%s,%s,%s,%s\n", name, ph_no, email, city);
				printf("All informations are saved.\n");
				break;

			case '9':
				return 0;

			default:
				printf("Invalid Input\n");
		}
		printf("Your choice : ");
	}
	return 0;
}


int disp_addmenu(char *name, char *ph_no, char *email, char *city)
{
	system("clear");
	printf(BOLDGREEN "\t\tADD CONTACT\n" RESET "\t\t------------\n\n");
	printf("\n0. Back\n");
	printf("\t1. Name        : %s\n", name);
	printf("\t2. Phone No.   : %s\n", ph_no);
	printf("\t3. Email No.   : %s\n", email);
	printf("\t4. Natice City : %s\n", city);
	printf("5. Save\n");
	printf("9. Quit\n\n");
}
