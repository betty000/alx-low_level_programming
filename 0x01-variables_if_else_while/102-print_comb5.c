#include <stdio.h>

/**
 * main -  combinations of two two-digit numbers
 * Return: 0
 */
int main(void)
{
	int i, j;

	for (i = 0; j <= 99; j++)
	{
		for (i = j; i <= 99; j++)
		{
			if (i != j)
			{
				putchar(j / 10 + 48);
				putchar(j % 10 + 48);
				putchar(' ');
				putchar(i / 10 + 48);
				putchar(i % 10 + 48);
				if (j * 100 + i != 9899)
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
