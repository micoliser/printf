#include "main.h"

/**
 * print_addr - prints the address of a variable
 * @args: arguments
 *
 * Return: count
 */
int print_addr(va_list args)
{
	int i;
	char *str;
	unsigned long int addr;
	char null[] = "(nil)";

	str = va_arg(args, char *);
	if (str == NULL)
	{
		for (i = 0; null[i] != '\0'; i++)
			_putchar(null[i]);
		return (5);
	}

	addr = (unsigned long int)str;

	_putchar('0');
	_putchar('x');
	print_HEX(addr, 12, 0);

	return (14);
}
