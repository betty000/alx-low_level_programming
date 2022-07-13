#include "main.h"
#include <stdio.h>

/**
 * print_array -  function that prints n elements
 * @a: in to check
 * @n: in to check
 */
void print_array(int *a, int n)
{
	int i;

	i = 0;
	if (n > 0)
	{
		printf("%d", a[i]);
		i++;
		n--;
	}
	for (; n > 0; n--)
	{
		printf(", %d", a[i]);
		i++;
	}
	printf("\n");

}

