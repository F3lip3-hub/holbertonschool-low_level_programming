#include "dog.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * init_dog - prototype with struct dog as parameter
 * @d: pointer to the struct
 * @name: holds the name
 * @age: holds the age
 * @owner: holds the owner
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
		return;

	d->name = name;
	d->age = age;
	d->owner = owner;
}
