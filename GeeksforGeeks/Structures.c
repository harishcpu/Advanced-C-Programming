#include <stdio.h>

#if 0
/* How to create a structure?
   'struct' keyword is used to create a structure. Following is an example. */
struct Address
{
    char name[50];
    char street[100];
    char city[50];
    char state[20];
    int pin;
};

#elif 0
struct Point
{
    int x, y;
}p1;    // The variable p1 is declared with 'Point'

int main()
{
    struct Point p2;    // The variable p2 is declared like a normal variable.
}
/* NOTE: In C++, the struct keyword is optional before in declaration of a variable. 
 * In C, it is mandatory. */

#elif 0
/* How to initialize structure members?
 * Structure members cannot be initialized with declaration. For example the following 
 * C program fails in compilation. 
 */
struct Point
{
    int x = 0;  //COMPILER ERROR: cannot initialize members here
    int y = 0;  //COMPILER ERROR: cannot initialize members here
};

#elif 0
/* Structure members can be initialized using curly braces ‘{}’. For example, following 
 * is a valid initialization.
 */
struct Point
{
    int x, y;
};

int main()
{
    /* A valid initialization. member x gets value 0 and y gets value 1.  
       The order of declaration is followed. */
    struct Point p1 = {0, 1};
    printf("%d, %d\n", p1.x, p1.y);
}

/* Structure members are accessed using (.) operator */
#elif 0
struct Point
{
    int x, y;
};

int main()
{
    struct Point p1 = {0, 1};
    // Accessing members of point p1
    p1.x = 20;
    printf("x = %d, y = %d\n", p1.x, p1.y);

    return 0;
}

#elif 0
struct Point
{
    int x, y, z;
};

int main()
{
    /* Examples of initialization using designation initialization */
    struct Point p1 = {.y = 0, .z = 1, .x = 2};
    struct Point p2 = {.x = 20};

    printf("x = %d, y = %d, z = %d\n", p1.x, p1.y, p1.z);
    printf("x = %d\n", p2.x);
    return 0;
}

#elif 0
struct Point
{
    int x, y;
};

int main()
{
    // create an array of sructures
    struct Point arr[10];

    // Access array members
    arr[0].x = 10;
    arr[0].y = 20;

    printf("%d %d\n", arr[0].x, arr[0].y);
    return 0;
}

#elif 1
struct Point
{
    int x, y;
};

int main()
{
    struct Point p1 = {1, 2};

    //p2 is a pointer to structure p1
    struct Point *p2 = &p1;

    //Accessing structure members using structure pointer
    printf("%d %d\n", p2->x, p2->y);
    return 0;
}
#endif
