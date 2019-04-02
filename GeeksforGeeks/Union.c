#include <stdio.h>

#if 0
/* For example in the following C program, both x and y share the same location. 
 * If we change x, we can see the changes being reflected in y.
 */
union test
{
    int x, y;
};

int main()
{
    union test t;
    t.x = 2;        // t.y also gets value 2
    printf("After making x = 2:\n x = %d, y = %d\n\n", t.x, t.y);

    t.y = 10;       // t.x is also updated to 10
    printf("After making y = 10:\n x = %d, y = %d\n\n", t.x, t.y);

    return 0;
}




#elif 0
/* How is the size of union decided by compiler?
 * Size of a union is taken according the size of largest member in union.
 */
union test1 
{
    int x, y;
} Test1;

union test2
{
    int x;
    char y;
} Test2;

union test3
{
    int arr[10];
    char y;
} Test3;

int main()
{
    printf("sizeof(test1) = %lu, sizeof(test2) = %lu, "
            "sizeof(test3) = %lu\n", 
            sizeof(Test1), 
            sizeof(Test2), sizeof(Test3));
    return 0;
}




#elif 1
/* Pointers to unions?
 * Like structures, we can have pointers to unions and can access members using 
 * the arrow operator (->). The following example demonstrates the same.
 */
union test
{
    int x;
    char y;
};

int main()
{
    union test p1;
    p1.x = 65;

    // p2 is a pointer to union p1
    union test* p2 = &p1;

    // Accessing union members using pointer
    printf("%d %c\n", p2->x, p2->y);
    return 0;
}
#endif
