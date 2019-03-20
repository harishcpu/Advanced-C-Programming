/* Title : Print ascii table
 * Author : Harish
 * Date : 22 Nov
 * Description : no input from user, ascii table
 */
#include<stdio.h>

#define MAXLEN 14

int main()
{
	char c[MAXLEN]="Non Printable";
	
	printf("Decimal\tOctal\tHexadeci\tASCII\n");
	printf("-------\t-----\t--------\t------\n");
	for(int i = 0; i <= 127; i++)
	{
		if(i <= 32) {
			printf("%d\t  %o\t  %x\t", i, i, i);    //non printable characters
			printf("%s\n", c);
		} else if (i == 127) {
			printf("%d\t  %o\t  %x\t", i, i, i);    // last character non printable
			printf("%s\n", c);
		} else if(i > 32) {
			printf("%d\t  %o\t  %x\t  %c\n", i, i, i, i);   // printable characters
		}
	}
	return 0;
}
