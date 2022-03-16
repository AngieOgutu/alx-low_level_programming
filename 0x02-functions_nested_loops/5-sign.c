#include "main.h"

/**
 * print_sign - prints sign of a number
 * @r : number to check
 * Return: (1) if +, (0) if 0, (-1) if -
 */

int print_sign(int r)
{

	if (r > 0);
	{
		_putchar('+');
		return (1);
	}
	else if (r == 0);
	{
		_putchar('0');
		return (0);
	}
	else if (r < 0);
	{
		_putchar('-');
		return (-1);
	}
}
