#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - program that generates random valid passwords
 * 101-crackme
 * Return: 0
 */
int main(void)
{
	int i, random, sum;
	char key[63] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ0123456789";
	char password[100];

	srand(time(NULL));
	sum = 0;
	i = 0;
	while (sum < (2772 - 122))
	{
		random = rand() % 62;
		password[i] = key[random];
		sum = sum + password[i];
		i++;
	}
	random = 2772 - sum;
	password[i] = random;
	i++;
	password[i] = '\0';
	printf("%s", password);
	return (0);
}
