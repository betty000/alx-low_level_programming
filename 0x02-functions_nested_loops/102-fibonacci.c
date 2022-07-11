#include "main.h"
#include <stdio.h>

/**
 * main -  prints the first 50 Fibonacci numers
 * Description: tarting with 1 and 2, followed by a new line
 * Return: 0
 */
int main(void)
{
	int count;

	unsigned long x, y, z;

	x = 0;
	y = 1;
	for (count = 1; count <= 49; count++)
	{
		z = x + y;
		x = y;
		y = z;
		printf("%lu, ", z);
	}
	printf("%lu\n", z + x);
	return (0);

}
