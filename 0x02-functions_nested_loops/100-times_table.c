#include <stdio.h>
#include "main.h"

/**
  * main - prints n times table starting with 0
  * Return: 0
  */

void print_times_table(int n)
{
	int i, j;
	int prod;

	if (n > 15 || n < 0)
	{
		return;
	}

	for (i = 0; i <= n; i++)
	{
		for (j = 0; j <= n; j++)
		{
			prod = i * j;
			
			if (prod > 99)
			{
				_putchar((prod / 100) + '0');
				_putchar((prod / 10 % 10) + '0');
				_putchar((prod % 10) + '0');
			}

			else if (prod > 9)
			{
				_putchar(' ');
				_putchar((prod / 10) + '0');
				_putchar((prod % 10) + '0');
			}

			else if ( j != 0)
			{
				_putchar(' ');
				_putchar(' ');
				_putchar(prod + '0');
			}

			else
			{
				_putchar(prod + '0');
			}

			if (j != n)
			{
				_putchar(',');
				_putchar(' ');
			}
		}

		_putchar('\n');
	}
}
