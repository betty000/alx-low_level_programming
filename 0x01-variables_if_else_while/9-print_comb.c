#include <stdio.h>

/**
 * main - prints all possible combinations of single-digit numbers
 * Return: 0
 */
int main(void)
{
	int i;

	for (i = 10; i < 20; i++)
	{
		putchar((i % 10) + '0');
		if (i != 10)
		{
			putchar('+');
			putchar('');
		}
	}
	putchar('\n');
	return (0);
}
