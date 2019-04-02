#include <stdio.h>

void merge(int *ary, int l, int m, int r)
{
        int i, j, k;
        int n1 = m - l + 1;
        int n2 = r - m;

        int L[n1], R[n2];

        for (i = 0; i < n1; ++i)
                L[i] = ary[l + i];
        for (j = 0; j < n2; ++j)
                R[j] = ary[m + 1 + j];

        i = 0;
        j = 0;
        k = l;

        while (i < n1 && j < n2)
        {
                if (L[i] <= R[j])
                {
                        ary[k] = L[i];
                        ++i;
                }
                else
                {
                        ary[k] = R[j];
                        ++j;
                }
                ++k;
        }

        while (i < n1)
        {
                ary[k] = L[i];
                ++i;
                ++k;
        }

        while (j < n2)
        {
                ary[k] = R[j];
                ++j;
                ++k;
        }
}

void mergesort(int *ary, int l, int r)
{
        if (l < r)
        {
                int m = (l + (r - 1)) / 2;

                mergesort(ary, l, m);
                mergesort(ary, m+1, r);

                merge(ary, l, m, r);
        }
}

int main()
{
        int size;

        printf("Enter the size of ary: ");
        scanf("%d", &size); 

        int arr[size];
        printf("Enter the array elements: ");
        for (int i = 0; i < size; ++i)
        {
                scanf("%d", &arr[i]);
        }

        mergesort(arr, 0, size - 1);

        printf("After performing merge sort: ");
        for (int i = 0; i < size; ++i)
                printf("%d ", arr[i]);
        putc('\n', stdout);
}
