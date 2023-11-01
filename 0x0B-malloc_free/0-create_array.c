#include "main.h"
#include <stdio.h>

/**
 * create_array - creates an array and initializes it with a specific char
 * @size: size of array
 * @c: char to initialize
 * Return: pointer to array, NULL if 0 or fails
 */

char *create_array(unsigned int size, char c)
{
	char *a;
	unsigned int i;

	if (size <= 0)
		return (NULL);

	a = malloc(size * sizeof(*a));
	if (a == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
		a[i] = c;

	return (a);
}
