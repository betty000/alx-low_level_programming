#include "main.h"

/**
 * _strcpy - function that copies the string pointed to by src
 * @dest: dest pointer
 * @src: src pointer
 * Return: coied value
 */
char *_strcpy(char *dest, char *src)
{
	char *result = dest;

	while (*src != '\0')
	{
		*dest = *src;
		dest++;
		src++;
	}
	*dest = '\0';
	return (result);
}
