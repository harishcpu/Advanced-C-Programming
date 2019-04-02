#include <stdio.h>

#if 0
//SIMPLE METHOD: Naive Solution
/* count_set_bits: Time Complexity: (-)(logn) (Theta of logn), Space complexity: O(1) */
unsigned int count_set_bits(unsigned int n)
{
	unsigned int count = 0;
	while (n) {
		count += n & 1;
		n >>= 1;
	}
	return count;
}




#elif 0
//RECURSIVE APPROACHES
int count_set_bits(int n)
{
	if (n == 0)	/* base case */
		return 0;
	else
//	return (n & 1) + count_set_bits(n >> 1);/* if last bit is set add 1 else add 0 */
		return 1 + count_set_bits(n & (n - 1));
}




#elif 0
/* Brian Kernighan’s Algorithm: Time Complexity: O(setbits), Space Complexity: O(1) */
int count_set_bits(int n)
{
	int count = 0;
	while (n) {	      /* if n is not zero */ 
		n &= (n - 1); /*Do bitwise & with (n-1) and assign the value back to n*/
		count++;
	}
	return count;
}



#elif 1
/*INDEXES:	 {0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15} */
int lookup[16] = {0, 1, 1, 2, 1, 2, 2, 3, 1, 2,  2,  3,  2,  3,  3,  4}; /* no. of bits of each number */
int count_set_bits(int n)
{
	if (n == 0)
		return lookup[0];
	return lookup[n & 0xf] + count_set_bits(n >> 4);
}




#else
/* Secret Approach */
/* using "__builtin_popcount()" in gcc: Time complexity: O(1) */
int count_set_bits(int n)
{
	return __builtin_popcount(n);
}
#endif





int main()
{
	int num;
	printf("Enter a number : ");
	scanf("%d", &num);

	printf("The no. of set bits in %d : %d\n", num, count_set_bits(num));
	return 0;
}

