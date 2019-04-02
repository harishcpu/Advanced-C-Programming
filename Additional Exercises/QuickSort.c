#include <stdio.h>

int swap (int *a, int *b)
{
        int temp = *a;

        *a = *b;
        *b = temp;
}

int partition(int *arr, int low, int high)
{
        int pivot = arr[high];
        int i = low - 1;

        for (int j = low; j <= high - 1; ++j)
        {
                if (arr[j] <= pivot)
                {
                        ++i;
                        swap (&arr[i], &arr[j]);
                }
        }
        swap (&arr[i + 1], &arr[high]);
        return (i + 1);
}

int quicksort(int arr[], int low, int high)
{
        if (low < high)
        {
                int pi = partition(arr, low, high);

                quicksort(arr, low, pi - 1);
                quicksort(arr, pi + 1, high);
        }
}

void printary(int *arr, int n)
{
        for (int i = 0; i < n; ++i)
        {
                printf("%d ", arr[i]);
        }
        printf("\n");
}

int main()
{
        int ary[] = {10, 2, 4, 5, 6, 8, 3};
        int n = sizeof ary / sizeof ary[0];

        quicksort(ary, 0, n-1);

        printf("Sorted Array: ");
        printary(ary, n);
}
