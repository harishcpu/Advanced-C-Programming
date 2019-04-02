#if 0

void fun() {  }		// will compile fine.
int main(void)
{
	fun(10, "GFG", "GQ");
	return 0;
}
#else

void fun(void) {  }	// will fail to compile
int main(void)
{
	fun(10, "GFG", "GQ");
	return 0;
}

#endif
