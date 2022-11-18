#include "main.h"

int print_str(char *);

/**
 * _printf - a function that produces output according to a format
 * @format: a character string
 *
 * Return: the number of characters printed
 */
int _printf(const char *format, ...)
{
	va_list list;
	int i, count = 0;
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
		return(0);

	for (i = 0; s[i] != '\0'; i++)
	{
		_putchar(s[i]);
	}
	return (i);
}
