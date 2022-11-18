#include "main.h"

int main(void)
{
	int count;

	count = _printf(NULL);
	putchar('\n');
	printf("%d\n", count);

	count = _printf("%c cats", 'c');
	putchar('\n');
	printf("%d\n", count);

	count = _printf("%s hahahsa %b%o", "Emiline", 5, 80);
	putchar('\n');
	printf("%d\n", count);

	count = _printf("%u %u", 80, -80);
	putchar('\n');
	printf("%d\n", count);

	count = _printf("%x %X", 546768, -12);
	putchar('\n');
	printf("%d\n", count);

	count = _printf("%% hey %s", NULL);
	putchar('\n');
	printf("%d\n", count);

	count = _printf("%d hey %s", 5045, "Berny");
	putchar('\n');
	printf("%d\n", count);

	count = _printf("%i", 5);
	putchar('\n');
	printf("%d\n", count);
	
	count = _printf("%d", -77383);
	putchar('\n');
	printf("%d\n", count);

	count = _printf("%i", -2334);
	putchar('\n');
	printf("%d\n", count);

	count = _printf("%i", 0);
	putchar('\n');
	printf("%d\n", count);

	return (0);
}
