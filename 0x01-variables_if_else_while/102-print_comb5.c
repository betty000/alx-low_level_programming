#include <stdio.h>

/**
 * main -  combinations of two two-digit numbers
 * Return: 0
 */
int main(void)
{
	int i, j, m;

	for (i = 0; i <= 99; i++)
	{
		for (j = 0; j <= 99; j++)
		{
			for ( m = 0; m<= 98 m++)
			{
				if (i > j && m > i)
				{
					putchar(j / 10 + 48);
					putchar(j % 10 + 48);
					putchar(' ');
					putchar(i / 10 + 48);
					putchar(i % 10 + 48);
					putchar(' ');
					putchar(m / 10 + 48);
					putchar(m % 10 + 48);
					if (m != 98; i != 99 || j != 100)
					{
						putchar(',');
						putchar(' ');
					}
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
