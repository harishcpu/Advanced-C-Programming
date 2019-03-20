/*myPow: finds the value of base ^ power.*/
int MyPow(int base, int power)
{
 	int x;			//variable used in loop counter
	int number = 1;	
 	for(int x = 1; x <= power; x++)
 		number *= base;
 	return number;
}

