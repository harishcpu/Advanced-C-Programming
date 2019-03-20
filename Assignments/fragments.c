/* Title : Fragments
 * Author : Harish
 * Date : 14 Nov
 * Description : get 5 array elements from user, sort the elements in each array 
 *               and print them.
 */
#include <stdio.h>
#include <limits.h>
#include <stdlib.h>

/* sort_ary: sort the array elements */
void sort_ary(int *ary[], int n)
{
    for (int k = 0; k < n; k++) {                           /* represents pointer */
        for (int i = 0; *(*(ary + k) + i) != INT_MIN; i++) {
            for (int j = i + 1; *(*(ary + k) + j) != INT_MIN; j++) { /* represents array elements */

                if (*(*(ary + k) + i) > *(*(ary + k) + j)) {
                    int temp = *(*(ary + k) + i);                       /* swap */
                    *(*(ary + k) + i) = *(*(ary + k) + j);
                    *(*(ary + k) + j) = temp;
                }
            }
        }
    }
}

/* print_ary: print the array elements */
void print_ary(int *ary[], int n)
{
    printf("\nAFTER SORTING : \n");
    for (int k = 0; k < n; k++) {                           /* represents pointer */

        printf("a[%d][] -> ", k + 1);
        for (int i = 1; *(*(ary + k) + i) != INT_MIN; i++)   /* represents array elements */
            printf("%d ", *(*(ary + k) + i));
        putc('\n', stdout);
    }
}

int main()
{
    int n_rows;

    printf("Enter the no. of arrays : ");
    scanf("%d", &n_rows);

    int *ary[n_rows];

    int count;
    for (int i = 0; i < n_rows; i++) {
        printf("\na[%d][LENGTH] : ", i + 1);
        scanf("%d", &count);                                /* scan the length for each array */

        ary[i] = malloc(sizeof(int) * (count + 1));           /* allocate the memory for each array */
        *(*(ary + i) + (count + 1)) = INT_MIN;
        printf("a[%d][0...%d] -> ", i+1, count - 1);
        for (int j = 0; j < count; j++) 
              scanf("%d", (*(ary + i) + j));                /* scan the array elements */
    }
        
    sort_ary(ary, n_rows);
    print_ary(ary, n_rows);
    
    printf("free : ");
    for (int i = 0; i < n_rows; i++) {
        free(ary[i]);
        printf("a[%d] ", i+1);
    }
    putc('\n', stdout);
    return 0;
}
