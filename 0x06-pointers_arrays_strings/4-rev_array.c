#include "main.h"

/**
 * reverse_array - reverses the content of an array of integers
 * @a: array a
 * @n: an element of an array
 */
void reverse_array(int *a, int n)
{
	int tmp, i;

	for (i = 0; i < n / 2; i++)
	{
		int start, end;

		start = a[i];
		end = a[tmp];
		a[i] = end;
		a[tmp] = start;
		tmp--;
	}
}

