#include "main.h"

int print_str(char *);
void print_number(int n);
int count_numbers(int n);

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
	char *str;

	if (!format)
		return (0);

	va_start(list, format);
	for (i = 0; format[i] != '\0'; i++)
	{
		if (format[i] == '%')
		{
			switch (format[i + 1])
			{
				case 'c':
					_putchar(va_arg(list, int)), i++, count++;
					break;
				case 's':
					str = va_arg(list, char *);
					count += print_str(str), i++;
					break;
				case '%':
					_putchar('%'), i++, count++;
					break;
				case 'd': case 'i':
					num = va_arg(list, int);
					print_number(num);
					count += count_numbers(num), i++;
					break;
				default:
					_putchar('%'), count++;
					break;
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
 * @s: string to print
 *
 * Return: void
 */
int print_str(char *s)
{
	int i;

	if (!s)
		return (0);

	for (i = 0; s[i] != '\0'; i++)
	{
		_putchar(s[i]);
	}
	return (i);
}

/**
 * print_number - prints an integer
 * @n: the integer to print
 * Return: void
 */
void print_number(int n)
{
	unsigned int num = n;

	if (n < 0)
	{
		_putchar('-');
		num = -num;
	}

	if ((num / 10) > 0)
	{
		print_number(num / 10);
	}

	_putchar((num % 10) + '0');
}

/**
 * count_numbers - counts numbers
 * @n: the number
 *
 * Return: count
 */
int count_numbers(int n)
{
	int i = 0, num = n;

	if (n == 0)
		return (1);

	if (n < 0)
	{
		i++;
		num *= -1;
	}

	while (num != 0)
	{
		i++;
		num /= 10;
	}

	return (i);
}
