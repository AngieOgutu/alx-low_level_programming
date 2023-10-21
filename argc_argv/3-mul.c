#include <stdio.h>
#include "main.h"
#include <stdlib.h>

/**
  * main - multiplies two numbers
  * @argc: count of arguments
  * @argv: arguments entered as arrays of strings
  * Return: 1 if numbers are less than 2; 0 otherwise
  */

int main(int argc, char *argv[])
{
	if (argc == 3)
	{
		printf("%d\n", atoi(argv[1]) * atoi(argv[2]));
		return (0);
	}

	else
		printf("Error\n");

	return (1);
}
