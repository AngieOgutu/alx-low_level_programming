#include "main.h"
#include <stdio.h>

/**
  *_strncpy - copies a string
  *@dest: original string
  *@src: string to copy
  *@n: number of chars to copy
  *Return: Pointer to resulting string dest
  */

char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n && src[i] != '\0'; i++)
		dest[i] = src[i];

	for (; n > i; i++)
		dest[i] = '\0';

	return (dest);
}
