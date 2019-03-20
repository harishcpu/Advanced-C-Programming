/* Title : Concatenate two files
 * Author : Harish
 * Date : 21 Dec
 * Description : read file names from cmd line, concat them.
 */

#include <stdio.h>

int main(int argc, char* argv[])
{
	FILE *fptr1, *fptr2, *fptr3;
	if (argc == 1) {
		char *c;
		scanf("%m[^EOF]s", &c);
		printf("%s\n", c);
	}

	else if (argc == 2) {
		fptr1 = fopen(arg[1], "r");
		if (fptr1 == NULL)
			fprintf(stderr, "Couldn't open the file\n");
		int ch;
		while((ch = fgetc(fptr1)) != EOF)
			printf("%c", ch);
		fclose(fptr1);
	}

	else if (argc == 3) {
		fptr1 = fopen("file1.txt", "r");
		if (fptr1 == NULL)
			fprintf(stderr, "Couldn't open file1\n");

		fptr2 = fopen("file2.txt", "r");
		if (fptr2 == NULL)
			fprintf(stderr, "Couldn't open file2\n");

		fptr3 = fopen("file3.txt", "w");
		if (fptr3 == NULL)
			fprintf(stderr, "Couldn't open file3\n");
		
		int ch, i = 0;
		char buf[1000];
		while ((ch = fgetc(fptr1)) != EOF) {
				fputc(ch, fptr3);
		} buf[i] = '\0';
	//	fputs(buf, fptr3);

		i = 0;
		while ((ch = fgetc(fptr2)) != EOF) { 
				fputc(ch, fptr3);
		} buf[i] = '\0';
		fputs(buf, fptr3);

		fclose(fptr1);
		fclose(fptr2);
		fclose(fptr3);
	}
	return 0;
}
