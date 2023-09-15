#include <stdio.h>
#include "main.h"

/**
 * main - prints numbers 1 to 100
 * For multiples of 3, it prints fizz and for multiples of 5, it prints buzz
 * For multiples of both, it prints FizzBuzz
 * Return: 0
 */

int main(void)
{
	int i;

	for (i = 1; i <= 100; i++)
	{
		if (i % 3 == 0 && i % 5 == 0)
		{
			printf("FizzBuzz ");
		}

		else if (i % 3 == 0)
		{
			printf("Fizz ");
		}

		else if (i % 5 == 0)
		{
			printf("Buzz ");
		}

		else
		{
			printf("%d ", i);
		}
	}

	printf("\n");

	return (0);
}
