#include "main.h"

/**
 * print_unsigned_dec - prints an unsigned integer
 * @args: arguments
 *
 * Return: count
 */
int print_unsigned_dec(va_list args)
{
	unsigned int arr[100], i = 0, r, count = 0;
	int j;
	unsigned int num;

	num = va_arg(args, unsigned int);

	if (num == 0)
	{
		_putchar('0');
		return (1);
	}

	while (num != 0)
	{
		r = num % 10;
		arr[i] = r;
		i++;

		num /= 10;
	}

	for (j = i - 1; j > -1; j--, count++)
		_putchar(arr[j] + '0');

	return (count);
}
