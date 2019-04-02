#include <stdio.h>

#if 0
/* An example program to demonstrate working of enum in C */
enum week {Mon, Tue, Wed, Thu, Fri, Sat, Sun};

int main()
{
    enum week day;

    day = Wed;
    
    printf("%d\n", day);
    return 0;
}

#elif 0
/* Another example program to demonstrate working of enum in C */
enum year {Jan, Feb, Mar, Apr, May, Jun, Jul, Aug, Sep, Oct, Nov, Dec};

int main()
{
    for (int i = Jan; i <= Dec; i++)
        printf("%d ", i);
    putchar('\n');
    return 0;
}
#endif







/* Interesting facts about initialization of enum. */

#if 0
/* 1. Two enum names can have same value. For example, in the following C program 
 * both ‘Failed’ and ‘Freezed’ have same value 0.
 */
enum State {Working = 1, Failed = 0, Freezed = 0};

int main()
{
    printf("%d %d %d\n", Working, Failed, Freezed);
    return 0;
}

#elif 0
 /* 2. If we do not explicitly assign values to enum names, the compiler by default assigns 
  * values starting from 0. For example, in the following C program, 
 sunday gets value 0, monday gets 1, and so on. */
enum day {Sun, Mon, Tue, Wed, Thu, Fri, Sat};

int main()
{
    enum day d = Thu;
    printf("The day number stored in d is \"%d\"\n", d);
    return 0;
}

#elif 0
/* 3. We can assign values to some name in any order. All unassigned names get value 
 * as value of previous name plus one.
 */
enum day {Sun = 1, Mon, Tue = 5, Wed, Thu = 10, Fri, Sat};

int main()
{
    printf("%d %d %d %d %d %d %d\n", Sun, Mon, Tue, Wed, Thu, Fri, Sat);
    return 0;
}

#elif 0
/* 4. The value assigned to enum names must be some integeral constant, i.e., 
 * the value must be in range from minimum possible integer value to maximum possible 
 * integer value. 
 */
#elif 0
/* 5. All enum constants must be unique in their scope. For example, the following program 
 * fails in compilation.
 */
enum state {Working, Failed};
enum result {Failed, Passed};

int main()
{
    return 0;
}
#endif







/* Predict the output of the following C programs */
#include <stdio.h>

#if 0

enum day {Sun = 1, Tue, Wed, Thu, Fri, Sat};

int main()
{
    enum day d = Thu;
    printf("The day number stored in d is %d\n", d);
    return 0;
}

#elif 1

enum State {Working = 0, Failed, Freezed};
enum State CurrState = 2;

enum State FindState() {
    return CurrState;
}

int main()
{
    (FindState() == Working) ? printf("WORKING\n") : printf("NOT WORKING\n");
    return 0;
}
#endif
