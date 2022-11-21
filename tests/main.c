#include "../main.h"

int main(void)
{
	int count;

	count = _printf("%s: %#o, %s: %#o, %s: %#x, %s: %#X\n", "Octal", 0120, "Octal", 120, "hex", 120, "HEX", 120);
	printf("%d\n", count);
	count = printf("%s: %#o, %s: %#o, %s: %#x, %s: %#X\n", "Octal", 0120, "Octal", 120, "hex", 120, "HEX", 120);
	printf("%d\n", count);

	count = _printf("%s: %#o, %s: %#o, %s: %#x, %s: %#X\n", "Octal", 0, "Octal", -872, "hex", 'c', "HEX", 125);
	printf("%d\n", count);
	count = _printf("%s: %#o, %s: %#o, %s: %#x, %s: %#X\n", "Octal", 0, "Octal", -872, "hex", 'c', "HEX", 125);
	printf("%d\n", count);
	count = _printf("% d, %+d, %+ d, % +d\n", 790, 99, 200, -51);
	printf("%d\n", count);
	count = printf("% d, %+d, %+ d, % +d\n", 790, 99, 200, -51);
	printf("%d\n", count);

	return (0);
}
