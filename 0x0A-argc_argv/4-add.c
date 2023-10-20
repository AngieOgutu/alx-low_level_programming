#include <stdio.h>
#include "main.h"
#include <ctype.h>
#include <stdlib.h>

/**
  * main - adds positive numbers
  * @argc: count of arguments
  * @argv: arguments entered as array of strings
  * Return: 1 id number contains symbols, 0 otherwise
  */

int main(int argc, char *argv[])
{
	int i, j, total = 0;

	if (argc < 2)
	{
		printf("0\n");
		return (0);
	}
	for (int i = 1; i < argc; i++)
	{
		for (int j = 0; argv[i][j] != '\0'; j++)
		{
			if (!isdigit(argv[i][j]))
			{
				printf("Error\n");
				return (1);
			}
		}

		total += atoi(argv[i]);
	}

	printf("%d\n", total);
	return (0);
}
