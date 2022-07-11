#include "main.h"
#include <stdio.h>

/**
 * main -  prints the sum of all the multiples of 3 or 5 below 1024
 * Return: 0
 */
int main(void)
{
	int sum, a;

	sum = 0;


	for (a = 1; a < 1024; a++)
	{
		if ((a % 3 == 0) || (a % 5 == 0))
		{
			sum += a;
		}
	}
	printf("%d\n", sum);
	return (0);
}
