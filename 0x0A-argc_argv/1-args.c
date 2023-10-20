#include <stdio.h>
#include "main.h"

/**
  * main - prints number of arguments
  * @argc: count of arguments
  * @argv: arguments entered as an array of strings
  * Return: 0
  */

int main(int argc, char *argv[])
{
	(void) argv;
	printf("%d\n", argc - 1);

	return (0);
}
