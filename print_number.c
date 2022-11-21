#include "main.h"

/**
 * print_number - prints an integer number using an array
 * @args: arguments
 *
 * Return: count
 */
int print_number(va_list args)
{
	int num;
	unsigned int num_t, temp, i, div = 1, count = 0;

	num = va_arg(args, int);
	if (num < 0)
	{
		num_t = num * -1;
		_putchar('-');
		count++;
	}
	else
	{
		num_t = num;
	}

	temp = num_t;

	while (temp > 9)
	{
		div *= 10;
		temp /= 10;
	}

	for (i = 0; div > 0; div /= 10, i++, count++)
	{
		_putchar(((num_t / div) % 10) + '0');
	}
	return (count);
}

/**
 * print_plus_number - prints an integer number using an array
 * @args: arguments
 *
 * Return: count
 */
int print_plus_number(va_list args)
{
	int arr[100], i = 0, j, r, count = 0;
	int num;

	num = va_arg(args, int);

	if (num == 0 || !num)
	{
		_putchar('+');
		_putchar('0');
		return (1);
	}

	if (num < 0)
	{
		_putchar('-');
		num = -num;
		count++;
	}
	else
	{
		_putchar('+');
		count++;
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

/**
 * print_space_number - prints an integer number using an array
 * @args: arguments
 *
 * Return: count
 */
int print_space_number(va_list args)
{
	int arr[100], i = 0, j, r, count = 0;
	int num;

	num = va_arg(args, int);

	if (num == 0 || !num)
	{
		_putchar(' ');
		_putchar('0');
		return (1);
	}

	if (num < 0)
	{
		_putchar('-');
		num = -num;
		count++;
	}
	else
	{
		_putchar(' ');
		count++;
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
