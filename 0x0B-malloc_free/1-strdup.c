#include "main.h"
#include <stdio.h>

/*
 * _strdup - returns a pointer to a newly allocated space in memory containing string copy
 * @str: string to duplicate
 * Return: pointer to duplicated string, NULL if insufficient memory or null str
 */

char *_strdup(char *str)
{
	char *a;
	int i, c;

	if (str == NULL)
		return (NULL);

	for (i = 0; str[i] != '\0'; i++)
		;

	a = malloc(i * sizeof(*a) + 1);
	if (a == NULL)
		return (NULL);
	
	for (c = 0; c < 1; c++)
		a[c] = str[c];
	a[c] = '\0';

	return (a);
}
