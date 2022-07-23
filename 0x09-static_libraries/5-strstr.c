#include "main.h"

/**
 * _strstr - locates a substring
 * @haystack: first string.
 * @needle: second string.
 * Return: char
 */
char *_strstr(char *haystack, char *needle)
{
	unsigned int length_needle = 0, i = 0, j, tmp, checker;

	while (needle[length_needle] != '\0')
		length_needle++;
	while (haystack[i] != '\0')
	{
		tmp = i;
		checker = 0;
		for (j = 0; j < length_needle; j++)
		{
			if (haystack[tmp] == needle[j])
			{
				tmp++;
				checker++;
			}
		}
		if (checker == length_needle)
			return (haystack + i);
		i++;
	}
	return (0);
}
