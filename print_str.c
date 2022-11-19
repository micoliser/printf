#include "main.h"

/**
 * print_str - prints a string using a loop that also counts the characters
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
