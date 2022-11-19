#include "main.h"

/**
 * print_addr - prints the address of a variable
 * @args: arguments
 *
 * Return: count
 */
int print_addr(va_list args)
{
	int i, n = 0;
	char *str;
	unsigned long int addr;
	char null[] = "(null)";

	str = va_arg(args, char *);
	if (str == NULL)
	{
		for (i = 0; null[i] != '\0'; i++)
			_putchar(null[i]);
		return (6);
	}

	addr = (unsigned long int)&str;

	_putchar('0');
	_putchar('x');













	for (i = 0; str[i] != '\0'; i++)
	{
	}
	return (i + n);
}

/**
 * print_HEX - prints an unsigned hexadecimal
 * @c: arguments
 *
 * prints an hexadecimal number from an int by continously dividing it by 16
 * then storing it in an array, and putting the remainder as 0-9 or A-F
 *
 * Return: nothing
 */
void print_hexad(unsigned long int iaddr)
{
	unsigned int p, num, hex[2] = {0, 0};
	int r;
	num = (int)c;

	for (p = 0; p < 2 && num != 0; p++)
	{
		hex[p] = num % 16;
		num /= 16;
	}

	/* Prints the hex array */
	for (r = 1; r >= 0; r--)
	{
		if (hex[r] < 10)
		{
			_putchar(hex[r] + '0');
		}
		else
		{
			_putchar((hex[r] % 10) + 'A');
		}
	}
}
