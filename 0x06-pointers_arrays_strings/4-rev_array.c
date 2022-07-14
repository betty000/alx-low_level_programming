#include "main.h"
#include <stdio.h>

/**
 * reverse_array - reverses the content of an array of integers
 * @a: array a
 * @n: an element of an array
 */
void reverse_array(int *a, int n)
{
	int k, i, p;

	for (k = 0; i = n - 1; i < n / 2; i--; k++)
	{
		p = a[k];
		a[k] = a[i];
		a[i] = p;
	}
}
