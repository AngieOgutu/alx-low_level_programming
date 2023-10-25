#include <stdio.h>
#include "main.h"

/**
  * main - prints the first 50 fibonnaci sequence
  * Return: 0
  */

int main(void)
{
	int a = 1, b = 2, next;

	printf("%d, %d", a, b);

	for (i = 1; i < 50; i++)
	{
		next = a + b;
		printf(", %d", next);
		 a = b;
		 b = next;
	}

	printf("\n");

	return (0);
}
