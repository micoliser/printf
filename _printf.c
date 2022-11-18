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
				count++;
			}
			else
			{
				count += ptr_func(list);
				i++;
			}
		}
		else
		{
			_putchar(format[i]);
			count++;
		}
	}
	return (count);
}
