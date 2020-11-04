#include "dog.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * print_dog - Prototype to print the list elements
 * @d: pointer to struct
 */
void print_dog(struct dog *d)
{
	if (d == NULL)
	{
		;
	}

	if (d->name == NULL)
	{
		printf("Name: (nil)");
	}
	if (d->age == '\0')
	{
		printf("Age: (nil)");
	}
	if (d->owner == NULL)
		printf("Owner: (nil)");

	printf("Name: %s\n", d->name);

	printf("Age: %f\n", d->age);

	printf("Owner: %s\n", d->owner);

}
