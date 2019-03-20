int replace_nbits(int num, int val, int nb)
{
	return (val & (~(~0 << nb)) | (num & (~0 << nb)));
}

/*
int replace_nbits(int num, int val, int n)
{
	int n1, number, n2;
	int bit1, bit2;
	int LSB, MSB;
	int a, count;
	
	LSB = 0; MSB = n - 1;
	n1 = num; number = num;
	n2 = val;

	for(LSB = 0; LSB <= MSB; LSB++)
	{
		a = 1;
		n1 = num;
		n2 = val;
		count = 0;
		while (count <= LSB) {
			if (count == LSB) 
				bit1 = (n1 & 1);
	//			a <<= 1;
			count++;
			n1 >>= 1;
		}
		count = 0;
		while (count <= LSB) {
			if (count == LSB)
				bit2 = (n2 & 1);
	//		a <<= 1;
			count++;
			n2 >>= 1;
		}
		count = 0;
		if (bit1 == bit2);
		else {
			while (count++ < LSB)
				a <<= 1;
			number ^= a;
		}
	}
	return number;
}
*/
