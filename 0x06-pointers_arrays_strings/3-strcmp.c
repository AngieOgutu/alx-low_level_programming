#include "main.h"
#include <stdio.h>

/**
 * _strcmp - Compares two strings
 * @s1: string
 * @s2: string
 * Return: is s1<s2 negative integer, if s1>s2 positive integer 0 if matching
 */

int _strcmp(char *s1, char *s2)
{
	int i;

	for (i = 0; s1[i] != '\0' || s2[i] != '\0'; i++)
	{
		if (s1[i] != s2[i])
			return (s1[i] - s2[i]);
	}
	return (0);
}
