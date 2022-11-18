#include "main.h"

/**
 * print_octal - prints a num in octal format
 * @args: arguments
 *
 * Return: count
 */
int print_octal(va_list args)
{
	unsigned int p, num, oct[100];
	int r;

	num = va_arg(args, unsigned int);

	for (p = 0; num != 0; p++)
	{
		oct[p] = num % 8;
		num /= 8;
	}

	for (r = p - 1; r >= 0; r--)
		_putchar(oct[r] + '0');

	return (p);
}
