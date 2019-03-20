/* Title : MEMORY MANAGER
 * Author : Harish
 * Date : 21 Dec
 * Description : IDK what to write as the description, it's awesome.
*/

#include <stdio.h>
#include <stdlib.h>
#include "colors.h"

extern int DispMenu(void *);

int main()
{
	void* dael;

	system("clear");
	printf("\t\t\t\t" BOLDRED "MEMORY MANAGER\n" RESET);
	dael = malloc(64);		//dynamic memory
	printf("You have %zu bytes of Space\n\n", sizeof(dael));

	DispMenu(dael);
	free(dael);
	return 0;
}
