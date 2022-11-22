#include "main.h"

/**
 * print_char - prints a single character
 * @args: arguments
 *
 * Return: 1, the no of char printed
 */
int print_char(va_list args)
{
	char c;

	c = va_arg(args, int);
	_putchar(c);

	return (1);
}
