#include "main.h"

/**
 * get_nflags - gets a particular function
 * @str: the string
 * @id: the index / function
 *
 * This function is called from the _printf function after % is encountered
 * It will return NULL if the char after % is not a specifier and just print %
 *
 * Return: number of characters to skip
 */
int get_nflags(const char *str, int id)
{
	/* fns is an array of structs containing the format and its function */
	prn fns[] = {
		{"c", print_char}, {"d", print_number}, {" d", print_space_number},
		{"+d", print_plus_number}, {"+ d", print_plus_number},
		{" +d", print_plus_number}, {"i", print_number},
		{" i", print_space_number}, {"+i", print_plus_number},
		{"+ i", print_plus_number}, {" +i", print_plus_number},
		{"s", print_str}, {"%", print_percent}, {"b", print_bin},
		{"o", print_octal}, {"u", print_unsigned_dec},
		{"x", print_unsigned_hex}, {"X", print_unsigned_HEX},
		{"S", print_STR}, {"p", print_addr}, {"#o", print_hash_octal},
		{"#x", print_hash_hex}, {"#X", print_hash_HEX}, {"r", print_rev},
		{"R", print_rot13}, {NULL, NULL}
	};
	int i = 0, j = 0;
	/* ask why not directly 0 as .c[j] */

	/* If str(or format) is not NULL, check for the function */
	if (str)
	{
		/* comparing each struct in the array, checking its char c[j](c[0] */
		while (fns[i].func != NULL)
		{
			if (fns[i].c[j] == str[id])
			{
				if (fns[i].c[j + 1] == '\0')
				{
					return (j + 1);
				}
				else
				{
					i--;
					j++;
					id++;
				}
			}
			i++;
		}
	}
	return (0);
}
