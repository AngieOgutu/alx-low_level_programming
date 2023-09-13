#include <stdio.h>
#include "main.h"

/**
 * _islower - checks if character is lowercase and returns 1
 * @c: character to be checked
 * Return: 1 ikf lowercase, 0 otherwise
 */

int _islower(int c)
{
	if (c >= 97 && c <= 122)
	{
		return (1);
	}

	else
		return (0);
}
