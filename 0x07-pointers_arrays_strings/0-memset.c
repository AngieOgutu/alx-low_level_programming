#include "main.h"
#include <stdio.h>

/**
 * _memset -  fills the first bytes of the memory area with the constant byte
 * @s: pointer to memory
 * @b: constant byte used to replace
 * @n: number of  bytes to replace
 * Return: pointer to memory area s
 **/

char *_memset(char *s, char b, unsigned int n)
{
	for (; n > 0; n--)
	{
		s[n - 1] = b;
	}

	return (s);
}
