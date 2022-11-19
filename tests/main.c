#include "../main.h"

int main(void)
{
	int count;
	int len1, len2;
	unsigned int ui;

	count = _printf("%cat\\\t\\s\n", 'c');
	printf("%d\n", count);

	count = _printf("Hello\tWorld. %s, with over %d candidates in C%x and %i total\n", NULL, NULL, 10, 12345);
	printf("%d\n", count);

	count = _printf("Let's try to printf a simple sentence.\n%");
	printf("%d\n", count);

	count = _printf("%cat\\\t\\s\n", 'c');
	printf("%d\n", count);

	len1 = _printf("Let's try to printf a simple sentence.\n");
	len2 = printf("Let's try to printf a simple sentence.\n");
	ui = (unsigned int)INT_MAX + 1024;

	_printf("Length:[%d, %i]\n", len1, len1);
	printf("Length:[%d, %i]\n", len2, len2);
	len1 = _printf("Negative:[%d]\n", -762534);
	len2 = printf("Negative:[%d]\n", -762534);
	_printf("Length:[%d, %i]\n", len1, len1);
	printf("Length:[%d, %i]\n", len2, len2);
	len1 = _printf("Unsigned:[%u]\n", ui);
	len2 = printf("Unsigned:[%u]\n", ui);
	_printf("Length:[%d, %i]\n", len1, len1);
	printf("Length:[%d, %i]\n", len2, len2);
	len1 = _printf("Unsigned octal:[%o]\n", ui);
	len2 = printf("Unsigned octal:[%o]\n", ui);
	_printf("Length:[%d, %i]\n", len1, len1);
	printf("Length:[%d, %i]\n", len2, len2);
	len1 = _printf("Unsigned hexadecimal:[%x, %X]\n", ui, ui);
	len2 = printf("Unsigned hexadecimal:[%x, %X]\n", ui, ui);
	_printf("Length:[%d, %i]\n", len1, len1);
	printf("Length:[%d, %i]\n", len2, len2);
	len1 = _printf("Character:[%c]\n", 'H');
	len2 = printf("Character:[%c]\n", 'H');
	_printf("Length:[%d, %i]\n", len1, len1);
	printf("Length:[%d, %i]\n", len2, len2);
	len1 = _printf("String:[%s]\n", "I am a string !");
	len2 = printf("String:[%s]\n", "I am a string !");
	_printf("Length:[%d, %i]\n", len1, len1);
	printf("Length:[%d, %i]\n", len2, len2);
	len1 = _printf("Percent:[%%]\n");
	len2 = printf("Percent:[%%]\n");
	_printf("Len:[%d]\n", len1);
	printf("Len:[%d]\n", len2);
	_printf("Unknown:[%r]\n");

	return (0);
}
