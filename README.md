## printf()
The printf project is a collaboration between Samuel Iwelumo and Aina Jesulayomi, actual students of Software Engineering at ALX, where a function named "_printf" imitates the actual "printf" command located in the stdio.h library. It contains some of the basic features and functions found in the manual 3 of "printf".

_printf() is a function that performs formatted output conversion and print data. Its prototype is the following:

	int _printf(const char *format, ...)

Where **format** contains the string that is printed. As _printf() is variadic function, it can receives n arguments that replace by n tags written inside the string.

The format tags prototype is the following:

	%[flags][length]specifier
	
If the program runs successfully, the **return value** is the amount of chars printed.
	
| Specifier | Output |
| ------------- | ------------- |
| c  | Character  |
| d or i | Signed decimal integer |
| s  | String of characters  |
| b  | Signed binary  |
| o  | Signed octal  |
| u  | Unsigned integer  |
| x  | Unsigned hexadecimal  |
| X  | Unsigned hexadecimal (uppercase)  |
| p  | Pointer address  |
| r  | Reverse string of characters |
| R  | ROT13 translation of string |
| S  | String with special chars replaced by their ASCII value  |
| %  | Character  |

| Flags | Description | Specifiers |
| ------------- | ------------- | ------------- | 
| +  | Prints a plus sign (+) when the argument is a positive number. In other case, prints a minus sign (-). | i, d |
| (space) | Prints a blank space if the argument is a positive number | i, d |
| #  | Prints 0, 0x and 0X for o, x and X specifiers, respectively. It doesn't print anything if the argument is zero | o, x, X |

| Length | Description | Specifiers |
| ------------- | ------------- | ------------- | 
| l | Prints a long int or unsigned long int | i, d, o, u, x and X |
| h | Prints a short int or unsigned short int | i, d, o, u, x and X |

------------

## Examples

1. Printing the string of chars "Hello, Holberton":
	+ Use: `_printf("Hello Hol%s.", "berton");`
	+ Output: `Hello Holberton.`
	
2. Printing an integer number:
	+ Use: `_printf("10 + 10 is equal to %d.", 20);`
	+ Output: `10 + 10 is equal to 20.`
	
3. Printing a binary, octal and hexadecimal:
	+ Use: `_printf("10 in binary is [%b], in octal is [%o] and in hexadecimal is [%x]", 5, 5, 5);`
	+ Output: `10 in binary is [1010], in octal is [12] and in hexadecimal is [A]`
	
4. Printing a string codified in ROT13:
	+ Use: `_printf("Hello in ROT13 is %R", "Hello");`
	+ Output: `Hello in ROT13 is Urybb`

Using flags and length tags:

5. Printing the string of chars "Hello, Holberton":
	+ Use: `_printf("2 * 2 = %+d and 5 * -5 = %+i", 4, -25);`
	+ Output: `2 * 2 = +4 and 5 * -5 = -25`
	
6. Printing a long integer number and short integer number:
	+ Use: `_printf("1 million as a long int is %ld, but as a short int is %hd", 1000000, 1000000);`
	+ Output: `1 million as a long int is 1000000, but as a short int is 16960`


------------

## File Functions

### _printf()
Own Printf Function Tha Performs Formatted Output Conversion And Print Data.

------------

### main.h
Header File Were All Prototypes Are Saved.

------------

### get_func()
Pointer To A Function That Selects The Correct Function To Perform The Operation.

------------

### _putchar()
Function That Prints The Buffer.

------------

------------

### print_char()
Function That Writes The Character C To Stdout.
```c
/* Identifier : %c */
```

------------

### print_str()
Function That Writes The String To Stdout.
```c
/* Identifier : %s */
```

------------

### print_number()
Function That Prints An Integer.
```c
/* Identifier : %i or %d */
```

------------

### print_bin()
Function That Prints Decimal In Binary.
```c
/* Identifier : %b */
```

------------

### print_octal()
Function That Prints Decimal In Octal.
```c
/* Identifier : %o */
```

------------

### print_unsigned_hex()
Function That Prints Decimal In Hexadecimal.
```c
/* Identifier : %x */
```

------------

### print_unsigned_HEX()
Function That Prints Decimal In Uppercase Hexadecimal.
```c
/* Identifier : %X */
```

------------

### print_STR()
Function That Prints A String And Values Of Non-Printed Chars.
```c
/* Identifier : %S */
```

------------

### print_unsigned_dec()
Function That Prints An Unsigned Integer.
```c
/* Identifier : %u */
```

------------

### print_rev()
Function That Writes The String To Stdout In Reverse.
```c
/* Identifier : %r */
```

------------

### print_rot13()
Function That Writes The String To Stdout In Rot13.
```c
/* Identifier : %R */
```

------------

### print_addr()
Function That Prints The Address Of An Input Variable.
```c
/* Identifier : %p */
```

------------

### print_long_octal()
Function That Prints Long Decimal Number In Octal.
```c
/* Identifier : %lo */
```

------------

### print_long_unsigned_hex()
Function That Prints Long Decimal Number In Hexadecimal.
```c
/* Identifier : %lx */
```

------------

### print_long_number()
Function That Prints  A Long Integer.
```c
/* Identifier : %li */
```

------------

### print_long_unsigned_HEX()
Function That Prints A Long Decimal In Uppercase Hexadecimal.
```c
/* Identifier : %lX */
```

------------

### print_long_unsigned_dec()
Function That Prints A Long Unsigned Integer.
```c
/* Identifier : %lu */
```

------------

### print_short_octal()
Function That Prints Short Decimal Number In Octal.
```c
/* Identifier : %ho */
```

------------

### print_short_unsigned_hex()
Function That Prints Short Decimal Number In Hexadecimal.
```c
/* Identifier : %hx */
```

------------

### print_short_number()
Function That Prints  A Short Integer.
```c
/* Identifier : %hi */
```

------------

### print_short_unsigned_HEX()
Function That Prints A Short Decimal In Uppercase Hexadecimal.
```c
/* Identifier : %hX */
```

------------

### print_short_unsigned_dec()
Function That Prints A Short Unsigned Integer.
```c
/* Identifier : %hu */
```

------------

### print_hash_hex()
Function That Print A Number In Hexadecimal Begining With 0 And x.
```c
/* Identifier : %#x */
```

------------

### print_hash_oct()
Function That Prints A Number In Octal Begining With 0 And o.
```c
/* Identifier : %#o */
```

------------

### print_hash_HEX()
Function That Prints A Number In Uppercase Hexadecimal.
```c
/* Identifier : %#X */
```

------------

### print_plus_number()
Function That Prints An Integer With Plus Symbol.
```c
/* Identifier : %+i */
```

------------

### print_space_number()
Function That Prints An Integer Begining With 0 And u.
```c
/* Identifier : % i */
```

------------

### get_nflags()
Function That Returns The Amount Of Identifiers.

------------

### Authors
Samuel Iwelumo and Aina Jesulayomi

------------

### End
