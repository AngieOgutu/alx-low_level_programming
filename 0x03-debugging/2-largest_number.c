#include <stdio.h>
#include "main.h"

/**
 * main - returns largest integer
 * @a: first integer
 * @b: second integer
 * @c: third integer
 * Return: largest number
 */

void main ()
{
	int a;
	int b;
	int c;


	if (a >= b && a >= c)

	{
		printf ("%d", a);
	}

	else if (b >= a && b >= c)

	{
		printf ("%d", b);
	}

	else

	{
		printf ("%d", c);
	}

	return;

}
