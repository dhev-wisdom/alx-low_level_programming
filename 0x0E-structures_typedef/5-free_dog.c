#include "dog.h"
#include <stdlib.h>

/**
 * free_dog - Frees dog
 * dog_t: Typedef of struct dog
 * @d: The dog to free
 */

void free_dog(dog_t *d)
{
	if (d == NULL)
		return;

	free(d->owner);
	free(d->name);
	free(d);
}

