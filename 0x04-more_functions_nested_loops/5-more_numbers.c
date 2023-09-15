#include <stdio.h>
#include "main.h"

/**
 * more_numbers - prints 10 times the number, from 0 to 14
 */

void more_numbers(void)
{
	int i, c;

	for (c = 0; c < 10; c++)
	{
		for (i = 0; i <= 14; i++)
		{
			if (i > 9)
			{
				_putchar((i / 10) + '0');
				_putchar((i % 10) + '0');
			}

			else
			{
				_putchar(i + '0');
			}
		}

		_putchar('\n');
	}
}
