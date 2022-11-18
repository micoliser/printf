#include "main.h"

/**
 * _printf - a function that produces output according to a format
 * @format: a character string
 *
 * Return: the number of characters printed
 */
int _printf(const char *format, ...)
{
	va_list list;
	int i, count = 0, num;
	int (*ptr_func)(va_list);

	if (!format)
		return (0);

	va_start(list, format);
	for (i = 0; format[i] != '\0'; i++)
	{
		if (format[i] == '%')
		{
			ptr_func = get_func(format, i + 1);
			if (ptr_func == NULL)
			{
				_putchar('%');
				count++, i++;
			}
			else
			{
				count += ptr_func(list);
				i++;
			}
			continue;
		}
		_putchar(format[i]);
		count++;
	}
	return (count);
}

/**
 * print_str - prints a string
 * @args: arguments
 *
 * Return: count
 */
int print_str(va_list args)
{
	int i;
	char *str;

	str = va_arg(args, char *);

	if (!str)
		return (0);

	for (i = 0; str[i] != '\0'; i++)
	{
		_putchar(str[i]);
	}
	return (i);
}

/**
 * print_number - prints an integer
 * @args: arguments
 *
 * Return: count
 */
int print_number(va_list args)
{
	int arr[100], i = 0, j, r, count = 0;
	int num;

	num = va_arg(args, int);

	if (num == 0)
	{
		_putchar('0');
		return(1);
	}

	if (num < 0)
	{
		_putchar('-');
		num = -num;
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
 * print_char - prints a character
 * @args: arguments
 *
 * Return: 1
 */
int print_char(va_list args)
{
	char c;

	c = va_arg(args, int);
	_putchar(c);

	return (1);
}
