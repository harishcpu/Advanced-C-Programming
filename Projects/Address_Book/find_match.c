#include "header.h"

#define SIZE 1000

/* find_match: find the matching pattern in the file */
int find_data(char *find, FILE* fileptr, int delete)
{
	int ch = 0;
	char *begin, *needle;
	char *start, *stop;
	char buf[SIZE];

	for (int i = 0; (buf[i] = fgetc(fileptr)) != EOF; i++);
	if ((needle = strstr(buf, find)) != NULL) {	// print the found line as same as grep command
		begin = needle;
		while (*--begin != '\n');
		if (*begin == '\n')
			begin++;
		
		if (delete == 1) {
			start = begin;			// for delete option
														//			printf("start: %p\n", start);
		}
		
		while (begin != needle)
			putc(*begin++, stdout);

		if (delete == 2)
			start = needle;			// for edit option

		printf(BOLDGREEN"");
		while (*needle != ',' && *needle != '\n' && *needle != '\0') {
			putc(*needle, stdout);
			needle++;
		}
		printf(RESET"");

		if (delete == 2)
			stop = needle - 1;		// for edit option

		while (*needle != EOF && *needle != '\n' && *needle != '\0') {
			putc(*needle, stdout);
			needle++;
		}

		if (delete == 1) {
			stop = ++needle;		// for delete option
														//			printf("\nstop: %p\n", stop);
		}
		putc('\n', stdout);
	} else {
		printf("Can't match with the data available. Please try with some other options.\n");
		return 0;
	}

	if (delete == 1) {
		printf("Are you sure you want to delete this line?" BOLDRED "(y/n) " RESET);
		if ('y' == getc(stdin))
			delete_line(buf, start, stop);
	}

	if (delete == 2) {
		printf("Are you sure you want to edit the above highlighted data?" BOLDRED "(y/n) " RESET);
		if ('y' == getc(stdin))
			edit_word(buf, find, start, stop);
	}
	return 0;
}

/* delete_line: deletes a specified line from the file */
int delete_line(char *buf, char *begin, char *end)
{
	printf("\n" BOLDRED);
	for (int i = 0; (begin + i) != end; i++)
		putc(*(begin + i), stdout);
	printf(RESET "");
	printf(BOLDBLACK "NOTE" RESET ": The above line will be deleted.\n\n");

	sleep(2);
	FILE* fptr = fopen("retest.csv", "w");	//changes will always be saved in "retest.csv" file.
	if (fptr == NULL)
		printf("Problem opening file in delete_line\n");
	
	while (*buf != EOF && *buf != '\0') {
		if (buf == begin) {
			buf += end - begin;
		}
		putc(*buf, fptr);
		putc(*buf, stdout);
		buf++;
	}
	printf(BOLDGREEN "\nDeletion was successful.\n" RESET);
	return 0;
}

int edit_word(char *buf, char *find, char *begin, char *end)
{
	char *str, newbuf[SIZE];
	printf("Enter the string to be replaced: ");
	getchar(); scanf("%m[^\n]s", &str);	// get the string to be inserted
	
	FILE* fptr = fopen("retest.csv", "w");	//changes will always be saved in "retest.csv" file.
	if (fptr == NULL)
		printf("Problem opening file in delete_line\n");
	
	int i = 0;
	while (*buf != EOF) {
		if (buf == begin) {
			buf += end - begin + 1;
			while (*str != '\0') {
				putc(*str, stdout);	// write the changes in stdout
				newbuf[i++] = *str++;
			}
		}
		newbuf[i++] = *buf;
		putc(*buf, stdout);
		buf++;
	}
	newbuf[i] = EOF;	
	i = 0;
	while (newbuf[i] != EOF)
		putc(newbuf[i++], fptr);
	printf(BOLDGREEN "Modification was successful.\n" RESET);
	
	sleep(4);
	return 0;
}
