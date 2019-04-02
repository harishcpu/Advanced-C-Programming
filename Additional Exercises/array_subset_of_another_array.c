#include <stdio.h>

/* Return 1 if arr2[] is a subset of  
arr1[] */
int isSubset(int *a, int *b, int m, int n)
{
        int i, j;

        for (i = 0; i < n; ++i)
        {
                for (j = 0; j < m; ++j)
                {
                        if(a[i] == b[j])
                                break;
                }
/* If the above inner loop was 
        not broken at all then arr2[i] 
        is not present in arr1[] */
                if(j == m)
                        return 0;
        }
        /* If we reach here then all 
    elements of arr2[] are present 
    in arr1[] */
        return 1;
}

int main()
{
  //      int a[] = {10, 11, 23, 14, 15, 8, 9, 5};
   //     int b[] = {5, 8, 9, 10};

          int a[] = {10, 5, 2, 23, 19};
          int b[] = {19, 5, 3};
        
   //     int a[] = {1, 2, 3, 4, 5, 6};
   //     int b[] = {4, 2, 1};

        int m = sizeof a / sizeof a[0];
        int n = sizeof b / sizeof b[0];

        if (isSubset(a, b, m, n))
                printf("Is a subset\n");
        else
                printf("Not a subset\n");
        return 0;
}
