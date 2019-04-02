#include<stdio.h> 
#if 0  
// C program to illustrate strings 
int main() 
{    
    // declare and initialize string 
    char str[] = "Geeks"; 
      
    // print string 
    printf("%s",str); 
      
    return 0; 
} 
#elif 0
#include<stdio.h>

// C program to read strings
int main()
{
    // declaring string
    char str[50];

    // reading string
    scanf("%s",str);

    // print string
    printf("%s\n",str);

    return 0;
}
#elif 1
#include<stdio.h>

// C program to illustrate how to
// pass string to functions
void printStr(char str[])
{
    printf("String is : %s\n",str);
}

int main()
{
    // declare and initialize string
    char str[] = "GeeksforGeeks";

    // print string by passing string
    // to a different function
    printStr(str);

    return 0;
}
#else
#endif
