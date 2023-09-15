#include <stdio.h>
#include "main.h"

/**
 * print_line - draws a straight line in the terminal
 * @n: number of times _ is printed
 */

void print_line(int n)
{
	while (n >= 1)
	{
		_putchar('_');
		n--;
	}

	_putchar('\n');
}
