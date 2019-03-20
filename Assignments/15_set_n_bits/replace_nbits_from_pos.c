
unsigned int replace_nbits_from_pos(int val, int num, int n, int m)
{
	return ((num & (~(~0 << n))) << m) | (val & ((~0 << n) << m | ~(~0 << m)));
}
