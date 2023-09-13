#include <stdio.h>
#include "main.h"

/**
 * times_table - prints 9 times table staring with 0
 */

void times_table(void)
{
	int x = 0;
	int y = 0;
	int z;

	while (x < 10)
	{
		while (y < 10)
		{
			z = x * y;
			if (z > 9)
			{
				_putchar((z / 10) + '0');
				_putchar((z % 10) + '0');
			}

			else if (y != 0)
			{
				_putchar(' ');
				_putchar(z + '0');
			}

			else
			{
				_putchar(z + '0');
			}

			if (y != 9)
			{
				_putchar(',');
				_putchar(' ');
			}
			y++;
		}
		_putchar('\n');
		x++;
	}
}
