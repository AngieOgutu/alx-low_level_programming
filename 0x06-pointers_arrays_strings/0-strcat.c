#include "main.h"
#include <stdio.h>

/**
  *_strcat - concatenates two strings
  *@src: string to append
  *@dest: string to append to
  *Return: pointer to resulting string dest
  */

char *_strcat(char *dest, char *src)
{
	int i, j;

	i = 0;

	while (dest[i] != '\0')
		i++;
	for (j = 0 ; src[j] != '\0'; j++)
	{
		dest[i] = src[j];
		i++;
	}
	dest[i] = src[j];

	return (dest);
}
