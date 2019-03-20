/* Title : tower of hanoi
 * Author : Harish
 * Date : 21 Dec
 * Description : read the number of disks from user, print the legal moves of respective rods.
 */

#include <stdio.h>

void tower_of_hanoi(int n, char from_rod, char to_rod, char aux_rod)
{
	if (n == 1) 
    {
		printf(" Move disk 1 from rod %c to rod %c\n", from_rod, to_rod);
		return;
	}
	tower_of_hanoi(n-1, from_rod, aux_rod, to_rod);
	printf(" Move disk %d from rod %c to rod %c\n", n, from_rod, to_rod);
	tower_of_hanoi(n-1, aux_rod, to_rod, from_rod);
}

int main()
{
	int n_disks;
	printf("Enter the number_of_disks : "); 
	scanf("%d", &n_disks);			// read no of disks

	tower_of_hanoi(n_disks, 'A', 'C', 'B');	// A, B, C are the names of rods
	return 0;
}
