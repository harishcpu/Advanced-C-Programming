#include <stdio.h>
#include <stdlib.h>

void find_aT(int, int);
void print_matrix(int **, int, int);
void multiply_2_matrices(int , int);

int **a, **aT, **aM;

int main()
{
	int rows, columns;

	printf("Enter the number of \nRows   : ");
	scanf("%d", &rows);				/* read the no. of rows */
	printf("Columns: ");
	scanf("%d", &columns);				/* read the no. of columns */

	a = (int **)malloc(sizeof(int *) * rows);

	printf("Enter the array elements : \n");
	for (int i = 0; i < rows; i++) {
		a[i] = (int *)malloc(sizeof(int)*columns);
		for (int j = 0; j < columns; j++) {
			printf("[%d][%d] : ", i, j);
			scanf("%d", *(a + i) + j);	/* read the array elements */
		}
	}
	print_matrix(a, rows, columns);
	find_aT(rows, columns);
	multiply_2_matrices(rows, columns);
	print_matrix(aM, rows, rows);

	free(a);
	free(aT);
	free(aM);
}

void print_matrix(int **ary, int rows, int columns)
{

	for (int i = 0; i < rows; i++) {
		for (int j = 0; j < columns; j++)
			printf("%d ", *(*(ary + i) + j));		/* print the array elements */
		putc('\n', stdout);
	}
}
void find_aT(int rows, int columns)
{
	int r = columns, c = rows;
	aT = (int **)malloc(sizeof(int *) * columns);
	for (int i = 0; i < r; i++)
		aT[i] = (int *)malloc(sizeof(int)*rows);
	for (int i = 0; i < c; i++) {
		for (int j = 0; j < columns; j++)
			aT[j][i] = a[i][j];
	}
	print_matrix(aT, r, c);
}

void multiply_2_matrices(int rows, int columns)
{
	aM = (int **)malloc(sizeof(int *) * rows);
	for (int i = 0; i < rows; i++)
		*(aM + i) = (int *)malloc(rows * sizeof(int));

	int i, j , k;
	for (i = 0; i < rows; i++) {
		for (j = 0; j < rows; j++) {
			for (k = 0; k < columns; k++)
				*(*(aM + i) + j) += *(*(a + i) + k) * *(*(aT + k) + j);
		}
	}
}
