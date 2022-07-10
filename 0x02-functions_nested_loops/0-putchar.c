#include<unistd.h>

/**
 * main - _putchar
 * @c: The character to print
 *
 * Return : 1.
 * On error, -1 is returned, and errno is set approperiately.  
 */
int _putchar(char c)
{
	return (write(1, $c, 1));
}
