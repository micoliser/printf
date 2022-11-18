#include "main.h"

/**
 * print_unsigned_hex - prints an unsigned hexadecimal
 * @args: arguments
 *
 * Return: count
 */
int print_unsigned_hex(va_list args)
{
	unsigned int p, num, hex[100];
	int r;

	num = va_arg(args, unsigned int);

	for (p = 0; num != 0; p++)
	{
		hex[p] = num % 16;
		num /= 16;
	}

	for (r = p - 1; r >= 0; r--)
	{
		if (hex[r] < 10)
		{
			_putchar(hex[r] + '0');
		}
		else
		{
			_putchar((hex[r] % 10) + 'a');
		}
	}

	return (p);
}
