#include "main.h"
#include <stdio.h>

/**
  *_strncat - concatenates two strings
  *@n: max number of bytes to concatenate
  *@src: string to concatenate
  *@dest: string to concatenate to
  *Return: pointer to the resulting string dest
  */

char *_strncat(char *dest, char *src, int n)
{
	int i, j;

	i = 0;

	while (dest[i] != '\0')
		i++;
	for (j = 0; j < n; j++)
	{
		dest[i] = src[j];
		i++;
	}
	if (dest[i - 1] != '\0')
		dest[i] = '\0';
	return (dest);
}
