#include <stdio.h>

/**
 * fizz_buzz - printing to 100
 * Description: prints FizzBuziz
 * Return: void
 */
int main(void)
{
	int x;

	while (x++ < 100)
	{
		if ((x % 3 == 0) && (n % 5 == 0))
			printf("FizzBuzz");
		else if((x % 5) == 0)
			printf("Buzz");
		else if ((x % 3) == 0)
			printf("Fizz");
		else if ((x % 5) == 0)
		{
			if (x != 100)
				printf("Buzz ");
		else
			printf("Buzz");
		}
		else
			printf("%d ", x);
	}
	printf("\n");
	return (0);
}
