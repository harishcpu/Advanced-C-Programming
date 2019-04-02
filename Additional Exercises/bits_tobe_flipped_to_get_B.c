/* Q. Count number of bits to be flipped to convert A to B

Given two numbers ‘a’ and b’. Write a program to count number of bits needed to be flipped to convert ‘a’ to ‘b’.

Example: 
Input : a = 10, b = 20
Output : 4
Binary representation of a is 00001010
Binary representation of b is 00010100
We need to flip highlighted four bits in a
to make it b.

Input : a = 7, b = 10
Output : 3
Binary representation of a is 00000111
Binary representation of b is 00001010
We need to flip highlighted three bits in a
to make it b.
*/

#include <stdio.h>
/* Brian Kernighan Algorithm: Time: O(setbits), Space: O(1) */
int count_setbits(int n)
{
	int count = 0;
	while (n) {
		n &= n-1;
		++count;
	}
	return count;
}
/*Methodology: 
 * 1. Calculate XOR of A and B.      
        a_xor_b = A ^ B
   2. Count the set bits in the above 
        calculated XOR result.
        countSetBits(a_xor_b)
*/
int main()
{
	int a, b;

	printf("Enter A and B : ");
	scanf("%d %d", &a, &b);

      printf("The no. of bits to be flipped to convert A to B: %d\n", count_setbits(a^b));
	return 0;
}
