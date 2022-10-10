#include "dog.h"
#include <stdlib.h>
/**
 * init_dog - initializes a variable of type `dog`
 *
 * @d: <dog>
 * @name: name of the dog <string>
 * @age: age of the dog <float>
 * @owner: owner of the dog <string>
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
		return;

	d->name = name;
	d->age = age;
	d->owner = owner;
}
