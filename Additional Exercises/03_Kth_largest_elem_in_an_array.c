#include <stdio.h>

#if 0
/* Simple method */
void SortArray(int *a, int n)
{
	int temp;
	for (int i = 0; i < n; i++) {
		for (int j = i; j < n; j++) {
			if (*(a + i) > *(a + j)) {
				temp = *(a + i);
				*(a + i) = *(a + j);
				*(a + j) = temp;
			}
		}
	}
}

int main()
{
	int size;

	printf("Enter the array size : ");
	scanf("%d", &size);

	int k, ary[size];
	printf("Enter the array elements: ");
	for (int i = 0; i < size; i++)
		scanf("%d", &ary[i]);

	printf("Enter K : ");
	scanf("%d", &k);

	SortArray(ary, size);
	printf("The Kth largest element : %d\n", ary[size - k]);
}
#elif 1
int main()
{

}
#endif
