#include <stdio.h>
#include "main.h"

/**
 * _abs - computes absolute value of an integer
 * @i: integer whose absolute is to be computed
 *Return: 0
 */

int _abs(int i)
{
	if (i < 0)
	{
		return (i * -1);
	}

	else
	{
		return (i);
	}
}
