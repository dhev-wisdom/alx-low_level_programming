#include "dog.h"
#include <stdio.h>
#include <string.h>

/**
 * init_dog - Initializes a variable of type struct dog.
 * @d: The dog to be initiailized.
 * @name: The name of the dog.
 * @age: The age of the dog.
 * @owner: The owner of the dog.
 *
 * Return: Always 0.
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d != NULL)
	{
		strcpy(d->name, name);
		d->age = age;
		strcpy(d->owner, owner);
	}
}
