#include "main.h"

/**
 * get_func - gets a particular function
 * @str: the string
 * @id: the index / function
 *
 * Return: a pointer to the function
 */
int (*get_func(const char *str, int id))(va_list)
{
	prn fns[] = {
		{"c", print_char}, {"d", print_number}, {"i", print_number},
		{"s", print_str}, {"%", print_percent}, {"b", print_bin},
		{"o", print_octal}, {"u", print_unsigned_dec},
		{"x", print_unsigned_hex}, {"X", print_unsigned_HEX},
		{NULL, NULL}
	};
	int i = 0, j = 0;

	if (str)
	{
		while (fns[i].func != NULL)
		{
			if (fns[i].c[j] == str[id])
				return (fns[i].func);
			i++;
		}
	}

	return (NULL);
}
