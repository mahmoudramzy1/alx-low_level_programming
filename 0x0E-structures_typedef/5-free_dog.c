#include "dog.h"
#include <stdlib.h>
/**
 * free_dog - free dog parameters
 * @d: struct dog to free
 */
void free_dog(dog_t *d)
{
	if (d)
	{
		if (d->name)
			free(d->name);
		if (d->owner)
			free(d->owner);
		free(d);
	}
}
