#include "main.h"

/**
 * _strspn - gets the length of a prefix substring
 * @s: string to check
 * @accept: string to check against
 * Return: number of bytes of s in accept
 */
unsigned int _strspn(char *s, char *accept)
{
	int i, k, flag;
	int counter = 0;

	for (i = 0; s[i] != '\0'; i++)
	{
		flag = 0;
		for (k = 0; accept[k] != '\0'; k++)
		{
			if (s[i] == accept[k])
			{
				counter++;
				flag = 1;
			}
		}
		if (flag == 0)
			return (counter);
	}
	return (0);
}
