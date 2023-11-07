#include "dog.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * print_dog - prints a struct dog
 * @d: struct dog pointer
 */

void print_dog(struct dog *d)
{
	if (d != NULL)
	{
		printf("Name: %s\n", (d->name == NULL) ? "(nil)" : d->name);
		printf("Age: %f\n", d->age);
		printf("Owner: %s\n", ());
	}
}
