#include <stdio.h>
#include <unistd.h>

int main(void)
{
	char *str = "The value is 2";

	write(1, str, 14);
	printf("\n");

	return (0);
}
