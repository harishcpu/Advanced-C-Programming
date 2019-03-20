/* Title : Count words in a file
 * Author : Harish
 * Date : 21 Dec
 * Description : get the file names from command line, print the no. of words read.
 */

#include <stdio.h>

int file_cw(FILE* ptr)
{
	int nw = 0;
	int ch;
	while ((ch = fgetc(ptr)) != EOF) {
		if (ch == ' ' || ch == '\t' || ch == '\n')
			++nw;
	}
	return nw;
}

int main(int argc, char* argv[])
{
	if (argc < 2) {
		fprintf(stderr, "error: Missing Source file\n");
		return 0;
	}

	FILE* fptr;
	fptr = fopen("/home/harish/ECEP_emertxe/C_programming/C_asignments/39_file_wc/file1.txt", "r");
	if(fptr == NULL) {
		fprintf(stderr, "Couldn't open file\n");
		return 0;
	}


	printf("No of words : %d\n", file_cw(fptr));
	fclose(fptr);

	return 0;
}
