#include "dog.h"
/**
 * init_dog - initialize dog
 * @d: pointer to the dog in init
 * @name: dog's name
 * @age: dog's age
 * @owner: owner's name
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
