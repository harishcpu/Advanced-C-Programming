#if 0
// C program to illustrate
// \a escape sequence
#include <stdio.h>
int main(void)
{
    printf("My mobile number "
          "is 7\a8\a7\a3\a9\a2\a3\a4\a0\a8\a");
    return (0);
}

#elif 0

// C program to illustrate 
// \b escape sequence 
#include <stdio.h> 
int main(void) 
{ 
    // \b - backspace character transfers 
    // the cursor one character back with  
    // or without deleting on different  
    // compilers. 
    printf("Hello Harish\b\b\b\bF"); 
    return (0); 
} 

#elif 0
// C program to illustrate
// \n escape sequence
#include <stdio.h>
int main(void)
{
    // Here we are using \n, which
    // is a new line character.
    printf("Hello\n");
    printf("Harish");
    return (0);
}

#elif 0
// C program to illustrate
// \t escape sequence
#include <stdio.h>
int main(void)
{
    // Here we are using \t, which is
    // a horizontal tab character.
    // It will provide a tab space
    // between two words.
    printf("Hello \t GFG");
    return (0);
}
#elif 0
// C program to illustrate
// \v escape sequence
#include <stdio.h>
int main(void)
{
    // Here we are using \v, which
    // is vertical tab character.
    printf("Hello friends");

    printf("\v Welcome to GFG");

    return (0);
}

#elif 0
// C program to illustrate \r escape
// sequence
#include <stdio.h>
int main(void)
{
    // Here we are using \r, which
    // is carriage return character.
    printf("Hello fri \r ends");
    return (0);
}

#elif 0
// C program to illustrate \\(Backslash) 
// escape sequence to print backslash. 
#include <stdio.h> 
int main(void) 
{ 
    // Here we are using \, 
    // It contains two escape sequence  
    // means \ and \n. 
    printf("Hello\\GFG"); 
    return (0); 
}

#elif 0
// C program to illustrate \' escape
// sequence/ and \" escape sequence to
// print single quote and double quote.
#include <stdio.h>
int main(void)
{
    printf("\' Hello Geeks\n");
    printf("\" Hello Geeks");
    return 0;
}

#elif 0
// C program to illustrate
// \? escape sequence
#include <stdio.h>
int main(void)
{
    // Here we are using \?,  which is
    // used for the presentation of trigraph
    // in the early of C programming. But
    // now we don't have any use of it.
    printf("\?\?!\n");
    return 0;
}

#elif 0

// C program to illustrate \OOO escape sequence
#include <stdio.h>
int main(void)
{
    // we are using \OOO escape sequence, here
    // each O in "OOO" is one to three octal
    // digits(0....7).
    char* s = "A\0725";
    printf("%s", s);
    return 0;
}

#elif 1
// C program to illustrate \XHH escape
// sequence
#include <stdio.h>
int main(void)
{
	// We are using \xhh escape sequence.
	// Here hh is one or more hexadecimal
	// digits(0....9, a...f, A...F).
	char* s = "B\x4a";
	printf("%s", s);
	return 0;
}

#endif
