#ifndef _MAIN_H_
#define _MAIN_H_

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <stdarg.h>
#include <unistd.h>

/**
 * struct print - Struct op
 *
 * @c: the character
 * @func: the function associated
 */
typedef struct print
{
	char *c;
	int (*func)(va_list);
} prn;

int _putchar(char c);
int _printf(const char *format, ...);
int (*get_func(const char *, int))(va_list);
int print_str(va_list);
int print_number(va_list);
int print_char(va_list);
int print_percent(va_list);

#endif
