#include <stdio.h>

/**
 * main - print the num of args you passed to it
 * @argc: argument count
 * @argv: argument vector, array of strings
 * Return: 0
 */
int main(int args, char *argv[])
{
	printf("%d\n", args -1 );
	(void)argv;
	return (0);
}
