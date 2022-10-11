#include "dog.h"
#include <stdlib.h>

/**
 * free_dog - frees the memory allocated to a `dog` type
 *
 * @d: reference to allocated memory to be freed.
 */

void free_dog(dog_t *d)
{
	if (d == NULL)
		return;

	free(d->name);
	free(d->owner);
	free(d->age);
	free(d);
}
