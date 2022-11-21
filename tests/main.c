#include "../main.h"

int main(void)
{
	int count;
	char *str = "Hello World";

	count = _printf("%s: %#o, %s: %#o, %s: %#x, %s: %#X\n", "Octal", 0120, "Octal", 120, "hex", 120, "HEX", 120);
	printf("%d\n", count);
	count = printf("%s: %#o, %s: %#o, %s: %#x, %s: %#X\n", "Octal", 0120, "Octal", 120, "hex", 120, "HEX", 120);
	printf("%d\n", count);

	count = _printf("%s, %r, %R, %R\n", str, str, str, "Uryyb Jbeyq");
	printf("%d\n", count);

	count = printf("%s\n", str);
	printf("%d\n", count);

	return (0);
}
