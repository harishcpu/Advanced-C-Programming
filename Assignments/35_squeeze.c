/* Title : Squeeze
 * Author : Harish
 * Date : 18 Dec
 * Description : read 2 strings from using, print the squeezed string.
*/

#include <stdio.h>
#include <unistd.h>
#include "colors.h"

#define MAX_LEN 100

void progBar();
void my_getline(char s[]);
void squeeze(char s1[], char s2[]);

int main()
{
	char s1[MAX_LEN], s2[MAX_LEN];

	printf("Enter the string : ");
	my_getline(s1);
	printf("Enter the matches to delete : ");
	my_getline(s2);

	printf(BOLDRED "\nSQUEEZING ");
	progBar();

	squeeze(s1, s2);
	printf(" Done\n" RESET ".\nYour String has become: " BOLDGREEN);
	for (int i = 0; s1[i] != EOF && s1[i] != '\0'; putc(s1[i], stdout), ++i);
	putc('\n', stdout);
}

void my_getline(char s[])
{
	int i;
	for (i = 0; (s[i] = getc(stdin)) != EOF && s[i] != '\n'; ++i);
	s[++i] = '\0';
}

void progBar(void)
{
	int i = 20;
	printf("[--");
	while(i < 100) {
		printf("-");
		usleep(50000);
		printf("]%d%%", i++);
		fflush(stdout);
		printf("\b\b\b\b");
	}
	printf("] %d%%", i);
}

void squeeze(char s1[], char s2[])
{
	int i, j, k = 0;

	for (i = 0; s1[i] != '\0'; ++i) {
		for (j = 0; s1[i] != s2[j] && s2[j] != '\0'; ++j);
		if (s2[j] == '\0')
			s1[k++] = s1[i];
	}
	s1[k] = '\0';
}







































/*	for (int i = 0,count = 0; i <= 2; ++i) {
		putc('.', stdout);
		my_delay(1);			//in seconds
		if (i == 2 && count < 1) {
			++count;
			puts("\b\b\b");
		//	printf("\x1B[A"); 
			i = -1;
			continue;
			}
	}
*/
/*	int milli_seconds = 1000 * sec;		// converts sec into milli-seconds
	clock_t start_time = clock();		// record start time

	while (clock() < start_time + milli_seconds);	//be here till delay is acheived
*/
/*
 * void squeeze(char s1[], char s2[])
{
	int i, j, k;
	for (i = 0; s1[i] != '\0'; ++i) {
		for (j = 0; s1[i] != s2[j] && s2[j] != '\0'; ++j); 
		if (s1[i] == s2[j]) {
			k = i;
			while (s1[k] != '\0') {
				s1[k] = s1[k+1];
				++k;
			}
			s1[k] = '\0';			// doubt how do i remove the last element. i dont wanna use another array.
		}
*}
*/
