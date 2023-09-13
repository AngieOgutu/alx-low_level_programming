#include <stdio.h>
#include "main.h"

/**
 * print_last_digit - prints last digit of a number
 * @n: number whose last digit is to be printed
 * Return: absolute value of last digit
 */

int print_last_digit(int n)
{
	n = n % 10;

	if (n < 0)
	{
		n = -n;
	}

	_putchar(n + '0');
	return (n);
}
