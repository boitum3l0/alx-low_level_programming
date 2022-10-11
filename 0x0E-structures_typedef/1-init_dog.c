#include "dog.h"

/**
 * init_dog - initializes a variable type
 * @d: pointer to struct dog
 * @name: name of dog
 * @age: age of dogt
 * @owner: name of dog owner
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{

	if (d != NULL)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
