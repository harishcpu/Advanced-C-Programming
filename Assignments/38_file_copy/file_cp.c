/* Title : Copy file
 * Author : Harish
 * Date : 18 Dec
 * Description : get the file names from command line, copy the file contents to another.
*/

#include <stdio.h>

#define MAXLEN 1000
int main(int argc, char* argv[])
{
	FILE *src_ptr, *dest_ptr;

	if (argc < 3) {
		fprintf(stderr, "Error: Please include both source and dest file names;\n");
		return 0;
	}

	src_ptr = fopen(argv[1], "r");
	if (src_ptr == NULL) {
		fprintf(stderr, "Can't open the file: %s\n", argv[1]);
		return 0;
	}
	dest_ptr = fopen(argv[2], "w");
	if (dest_ptr == NULL) {
		fprintf(stderr, "Can't open the file: %s\n", argv[2]);
		return 0;
	}

	char buf[MAXLEN];
	int ch, i = 0;
	while ((ch = fgetc(src_ptr)) != EOF)
		*(buf + i++) = ch;
	fputs(buf, dest_ptr);
	
	fclose(src_ptr);
	fclose(dest_ptr);
}
