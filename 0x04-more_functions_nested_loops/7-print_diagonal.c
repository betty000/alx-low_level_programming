#include "main.h"

/**
 * print_diagonal - prints line
 * @n: parameter
 */
void print_diagonal(int n)
{
	int x, y;

	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (x = 1; x <= n; x++)
		{
			if (x > 1)
			{
				for (num_lines = 1; num_lines <= row - 1; num_lines++)
				{
					_putchar(' ');
				}
			}
			_putchar('\\');
			_putchar('\n');
		}
	}
}
