#include "main.h"

/**
 * _atoi - function that convert a string to an integer
 * @s: input pointer
 * Return: integer value
 */
int _atoi(char *s)
{
	int value = 0;
	int j = 0;
	int isnum = 0;
	int sign = 1;

	for (; s[j]; j++)
	{
		if (s[j] == '-')
			sign *= -1;
		if (s[j] >= '0' && s[j] <= '9')
		{
			if (sign < 1)
			{
				isnum = 1;
				value *= 10;
				value += -(s[j] - '0');
				continue;
			}
			else
			{
				isnum = 1;
				value *= 10;
				value += s[j] - '0';
				continue;
			}
		}
		else if (isnum)
		{
			j++;
			break;
		}
	}
	return (value);
}
