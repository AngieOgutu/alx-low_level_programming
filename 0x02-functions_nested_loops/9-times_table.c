#include <stdio.h>
#include "main.h"

/**
 * times_table - prints 9 times table staring with 0
 */

void times_table(void)
{
	int x, y;
	int prod;

	for (x = 0; x < 10; x++)
	{
		for (y = 0; y < 10; y++)
		{
			prod = x * y;

			if (prod > 9)
			{
				_putchar((prod / 10) + '0');
				_putchar((prod % 10) + '0');
			}

			else if (y != 0)
			{
				_putchar(' ');
				_putchar(prod + '0');
			}

			else
			{
				_putchar(prod + '0');
			}

			if (y != 9)
			{
				_putchar(',');
				_putchar(' ');
			}
		}
		_putchar('\n');
	}

}
