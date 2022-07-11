#include <stdio.h>

/**
 * main - prints lowercase and upercase
 * Description: alphabet in lowercase, and then in uppercase
 * Return: 0
 */
int main(void)
{
	char a;

	for (a = 'a'; a <= 'z'; a++)
		putchar(a);
	for (a = 'A'; a <= 'Z'; a++)
		putchar(a);
	putchar('\n');
	return (0);
}
