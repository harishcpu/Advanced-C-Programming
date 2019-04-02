#include "macros.h"

int decimal_to_hexadecimal(void)
{
	int num, input;
	char *output = malloc(sizeof(unsigned) * 2 + 3);
	strcpy(output, "0x00000000");
	static char HEX[] = "0123456789ABCDEF";
	int index = 9;

	printf("Enter your decimal number : ");
	scanf("%d", &num);

	input = num;
	while (input > 0) {
		output[index--] = HEX[(input & 0xF)];
		input >>= 4;
	}

	printf("The hexadecimal equivalent for %d is ", num);
	printf("%s\n", output);
	return 0;
}

