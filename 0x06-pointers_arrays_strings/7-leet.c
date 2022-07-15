#include "main.h"

/**
 * leet -function that encodes a string into 1337
 * @str: string to encode
 * Return: pointer
 */
char *leet(char *str)
{
	int i, j;

	char c1[] = "aAeEoOtTlL";
	char c2[] = "4433007711";

	for (i = 0; str[i] != '\0'; i++)
	{
		for (j = 0; c1[j] != '\0'; j++)
		{
			if (*(c1 + j) == *(str + i))
			{
				str[i] = c2[j];
			}
		}
	}
	return (str);
}
