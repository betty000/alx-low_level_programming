#include "main.h"
#include <string.h>

/**
 * _strncat - this is a function strcat
 * @dest: first parameter
 * @src: second parameter
 * Return: a string
 */
char *_strncat(char *dest, char *src)
{
	int len = 0, i;

	while (dest[len])
		len++;
	for (i = 0; src[i] != 0; i++)
	{
		dest[len] = src[i];
		len += 1;
	}
	dest[len] = '\0';
	return (dest);
}
