#include <stdio.h> 

/**
 * 
 *
 * Return: 0 at successful exit
 */
int main(void)
{
	int n = 1;
	int *p = &n;
	int z;

	printf("n: %p, p: %x, z: %p\n", &n, p, &z);

	return (0);
}
