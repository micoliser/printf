#include "main.h"

/**
 * print_bin - prints a num in binary format, div by 2 and stores rem in an arr
 * @args: arguments
 *
 * Return: count
 */
int print_bin(va_list args)
{
	unsigned int p, num, bin[100];
	int r;

	num = va_arg(args, unsigned int);

	for (p = 0; num != 0; p++)
	{
		bin[p] = num % 2;
		num /= 2;
	}

	for (r = p - 1; r >= 0; r--)
		_putchar(bin[r] + '0');

	return (p);
}
