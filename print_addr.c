#include "main.h"

/**
 * print_addr - prints the address of a variable in hex format
 * @args: arguments
 *
 * Return: count
 */
int print_addr(va_list args)
{
	int i, count;
	void *str;
	long int addr;
	char null[] = "(nil)";

	str = va_arg(args, void *);
	if (str == NULL)
	{
		for (i = 0; null[i] != '\0'; i++)
			_putchar(null[i]);
		return (5);
	}

	addr = (intptr_t)str;
	_putchar('0');
	_putchar('x');
	count = print_HEX(addr, 12, 0);

	return (2 + count);
}
