#include <stdio.h>

/**
 * main - print the num of args you passed to it
 * @args: argument count
 * @argv: argument vector
 * Return: 0
 */
int main(int args, char *argv[])
{
	(void) argv;

	printf("%d\n", args - 1);

	return (0);
}
