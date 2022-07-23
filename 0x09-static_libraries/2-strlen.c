#include "main.h"

/**
 * _strlen - function that returns the length of a string
 * @s: sting pointer
 * Return: returns length of the string
 */
int _strlen(char *s)
{
	int a = 0;

	for (; *s++;)
		a++;
	return (a);
}
