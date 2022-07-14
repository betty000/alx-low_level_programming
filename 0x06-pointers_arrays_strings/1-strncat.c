#include "main.h"
#include <string.h>

/**
 * _strncat - this is a function strcat
 * @dest: first parameter
 * @src: second parameter
 * @n: integer
 * Return: a string
 */
char *_strncat(char *dest, char *src, int n)
{
	int x = 0;
	int y = 0;

	while (dest[x] != '\0')
		x++;
	while (src[y] != '\0' && y < n)
	{
		dest[x] = src[y];
		y++;
		x++;
	}
	return (dest);
}
