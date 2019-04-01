#include "header.h"

/* Export the Shell variables COLUMNS, LINES before execution
 * COLUMNS=SOME VALUE
 * LINES=SOME VALUE
 */
int main(int argc, char *argv[])
{
	static int count;
	int choice; 
	static FILE* fptr;							//static FILE* didn't work.
	
	if (argc == 1)
		argv[1] = "test.csv";
	if (count == 0)
	{
		fptr = fopen(argv[1], "a+");
		if (fptr == NULL) {
			printf(BOLDRED "Can't open file\n" RESET);
			return 0;
		}
		++count;
	}

	system("clear");
	printf("argv [0] %s   [1] %s\n", argv[0], argv[1]);
	printf(BOLDRED "\t\t\t\tADDRESS BOOK" RESET "\v\b\b\b\b\b\b\b\b\b\b\b\b\b--------------\n\n");
	printf("\t1. ADD CONTACT\n");
	printf("\t2. SEARCH CONTACT\n");
	printf("\t3. EDIT CONTACT\n");
	printf("\t4. DELETE CONTACT\n");
	printf("\t5. LIST ALL CONTACTS\n");
	printf("\t6. SAVE & EXIT\n\n");

	printf("\nYour choice : ");
	scanf("%d", &choice), getc(stdin);
	
	//char *dummy[] = {"", "dummy.csv"};					//proof that file "retest.csv" won't open again
	char *dummy[] = {"", argv[1]};					//proof that file "retest.csv" won't open again
	switch(choice) {
		case 1 :
			if (-1 == AddContact(fptr))
				return main(0, dummy);				//fptr will lose its data, learn to make it in global space
			break;
		case 2 :
			if (-1 == SearchContact(fptr))
				return main(0, dummy);
			break;
		case 3 :
			if (-1 == EditContact(fptr))
				return main(0, dummy);
			break;
		case 4 :
			if (-1 == DeleteContact(fptr, 0))
				return main(0, dummy);
			break;
		case 5 :
			if (-1 == PrintFile(fptr))
				return main(0, dummy);
			break;
		case 6 :
			fclose(fptr);								/* save & exit*/
			break;	
	}
	if (count) {
		printf(BOLDGREEN "GOOD BYE!\n" RESET);
		count = 0;
	}
	return 0;
}

