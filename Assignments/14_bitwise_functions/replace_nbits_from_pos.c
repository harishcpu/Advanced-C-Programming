
int replace_nbits_from_pos(int num, int val, int n, int m)
{
	return (num & ~(~(~0 << n) << (m + 1 - n)) | ((val & ~(~0 << n)) << (m + 1 - n)));
}
