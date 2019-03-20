
int toggle_nbits_from_pos(int num, int n, int pos)
{
	return (num ^ ((~(~0 << n)) << pos));
}
