#include <stdlib.h>
#include "header.h"

int PrintFile(FILE *fptr)
{
	char buf[10000];
	int line, comma, header = 0;
	int a[] = {11, 30, 30, 40, 20};

//	FILE* fptr = fopen(file_name, "r");
	for (int i = 0; (buf[i] = fgetc(fptr)) != EOF; i++);
	
	system("clear");
    //printf("Make sure you've exported the shell variables COLUMNS & LINES\n");
	printf(BOLDBLUE"\t\t\t\t\tFILE INFO" RESET "\n\t\t\t\t\t---------\n");
	line = comma = 0;
	
	int i, j, count;
    int s_no;

	s_no = i = count = 0;
	printf(" =======================================================================================================================================\n");
	while (*(buf + i) != EOF) {
        
        if (atoi(getenv("COLUMNS")) < 169) {
            printf(" CURRENT WINDOW SIZE : " BOLDRED "(%s x %s)" RESET " CAN'T DISPLAY. PLEASE MAXIMIZE THE TERMINAL WINDOW TO ().\n", getenv("COLUMNS"), getenv("LINES"));
            exit(-1);
        }
        j = 0;
		printf("  "); j += 2;
		
		if (header == 0)
			printf(BOLDRED "");
		else
			printf(RESET "");
		for (; *(buf + i) != ',' && *(buf + i) != '\n'; i++, j++)
			putc(*(buf + i), stdout);

		for (; j < a[comma] && j < 40; j++)
			putc(' ', stdout);

		printf(RESET ":");
		if (*(buf + i) == '\n') {
			putc(*(buf + i), stdout);
		}
		
		if (comma == 4) {
			printf(" =======================================================================================================================================\n");
            ++count;
            if (count == 5){
                count = 0;
                printf("(n)->");
                while('n' != getchar());
                system("clear");
			    printf(" =======================================================================================================================================\n");
            }
            if (isalpha(*(buf + i + 1)))
                printf(" :   %2d    :", ++s_no);
			comma = 1;
			++header;
		}
		else
			++comma;
		++i;
	}
	
	printf(RESET "\b\n");

	if ('\n' == getchar());
		return -1;
}
