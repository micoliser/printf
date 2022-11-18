#include "main.h"

/**
 * get_func - gets a particular function
 * @c: the string
 *
 * Return: a pointer to the function
 */
int (*get_func(const char *str, int id))(va_list)
{
	prn fns[] = {
		{"c", print_char}, {"d", print_number}, {"i", print_number},
		{"s", print_str}, {"%", print_percent}, {NULL, NULL},
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
