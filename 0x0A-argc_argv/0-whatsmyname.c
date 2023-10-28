#include <stdio.h>
#include "main.h"

/**
  * main- prints the name of the file followed by a newline
  * @argc: count of arguments
  * @argv: arguments entered as an array of strings
  * Return: 0
  */

int main(int argc, char *argv[])
{
	(void) argc;
	printf("%s\n", argv[0]);

	return (0);
}
