#include <stdio.h>

/**
 * fizz_buzz - printing to 100
 */
void fizz_buzz(void)
{
	int x;

	for (x = 0; x <= 100; x++)
	{
		if ((x % 3 == 0) && (x % 5 == 0))
			printf("FizzBuzz");
		else if (x % 5 == 0)
			printf("fizz");
		else
			printf("%i", x);
		if (n < 100)
			printf(" ");
		else
			printf("\n");

	}
	return (0);
}
