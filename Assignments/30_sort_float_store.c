/* Title : Sort float store
 * Author : Harish
 * Date : 26 Dec
 * Description : read floats from user, print the elements in order
 */

#include <stdio.h>
#include <limits.h>

void sort_store(int n, float s[]);

int main()
{
	int count;
	printf("Enter the count of float elements to be stored in store(< 10): ");
	scanf("%d", &count);
	while (count >= 10) {
		printf("Count must be < 10\nEnter count : ");
		scanf("%d", &count);
	}
	
	/* read float elements into store */
	float store[count - 1];
	for (int i = 0; i < count; ++i) {
		printf("[%d] : ", i+1);
		scanf("%f", &store[i]);
	}
	printf("After sorting : ");
	sort_store(count, store);				//print the sort floats
	printf("\nStore elements remain unchanged : \n");
	for (int i = 0; i < count; ++i)				// Verify if elements changed
		printf("[%d] : %.1f\n", i+1, store[i]);
	putchar('\n');
}

void sort_store(int n, float* s)		
{
	float smallest, largest;
	
	smallest = *s; largest = *s;
	for (int i = 1; i < n; i++) {			
		if (*(s + i) < smallest)		// find the smallest
			smallest = *(s + i);
		if (*(s + i) > largest)			// find the largest
			largest = *(s + i);
	}

	printf("%.1f ", smallest);
	float k;
	for (int i = 0; i < n; i++) {
		k = largest;
		for (int j = 0; j < n; j++)
			if (k > *(s + j) && *(s + j) > smallest)
				k = *(s + j);

		for (int j = 0; j < n; j++)
			if (*(s + j) == k) 		// find the next subsequent small elements
				printf("%.1f ", *(s + j));		// print them
		smallest = k;
		if (smallest == largest)
			break;
	}
}
