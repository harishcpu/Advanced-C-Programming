/* Title : pre post increment
 * Author : Harish
 * Date : 28 Nov
 * Description : read num from user, print num in stdout
 */
#include <stdio.h>
#include <stdlib.h>

int pre_increment(int *p) 
{  
	
	*p = -(~*p);
	return *p;
}

int post_increment(int *p)
{ 
	int i;
	
	i = *p;
	*p = -(~*p);
	return i;
}

int main(int argc, char* argv[])
{
	int num;
	char choice;

	if(argv[1] == 0) {
		printf("Enter a number : ");
		scanf("%d", &num),getc(stdin);
	} else
		num = atoi(argv[1]);			/* get num from command line */

	printf("Enter your choice : \n1. pre increment\n2. post increment\nchoice : ");
	choice = getc(stdin);
	int i;
	choice == '1' ? i = pre_increment(&num) : (i = post_increment(&num));/* call respective functions */
	printf("return value : %d\n", i);
	printf("num : %d\n", num);
}














/*	if(choice == '1') {
		pre_increment(&num);
//		printf("after pre-inc, i : %d num : %d\n", i, num);
		printf("in main() num : %d\n", num);
	} else {
		post_increment(&num);
//		printf("after post-inc, i : %d num : %d\n", i, num);
		printf("in main() num : %d\n", num);
	}
}
*/
