#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
  * main - prints minimum number of coins to make change
  * @argc: count of arguments
  * @argv: arguments as an array of strings
  * Return: 1 if erroe, 0 otherwise
  */

int main(int argc, char *argv[])
{
	int cents, coins25, coins10, coins5, coins2, coins1, mincoins;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	cents = atoi(argv[1]);

	if (cents < 1)
	{
		printf("0\n");
		return (0);
	}

	coins25 = cents / 25;

	cents %= 25;

	coins10 = cents / 10;

	cents %= 10;

	coins5 = cents / 5;

	cents %= 5;

	coins2 = cents / 2;

	cents %= 2;

	coins1 = cents;

	mincoins = coins25 + coins10 + coins5 + coins2 + coins1;

	printf("%d\n", mincoins);
	return (0);
}
