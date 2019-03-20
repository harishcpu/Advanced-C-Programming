/* Title : Count words, lines and characters
 * Author : Harish
 * Date : 11 Dec
 * Description : read a line from user, count and print the nw, nl, nc.
 */

#include <stdio.h>
int main()
{
	int nc = 0, nw = 0, nl = 0;
	printf("Press <CTRL + D> whenever you're done. NOTE: White spaces ever will be considered as characters.\n");
	int ch, lastch;
	while ((ch = getc(stdin)) != EOF) {	// reads from stdin until EOF is encountered
		if (ch == ' ') {
			++nc;
            if (lastch != ch) {
                ++nw;
                lastch = ch;
		    }
        } else if (ch == '\n') {
			++nl, ++nc; ++nw;	
		} else
			++nc;
        lastch = ch;
    }
	printf("Total lines : %d  words : %d  characters : %d\n", nl, nw, nc);
}
