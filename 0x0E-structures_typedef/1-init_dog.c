#include "dog.h"

/**
 * init_dog - initializes a variable type
 * @d: pointer to struct dog
 * @name: name of dog
 * @age: age of dogt
 * @owner: name of dog owner
 */

void init_dog(struct dod *d, char *name, float age, char *owner)
{
	d = malloc(sizeof(struct dog));

	if (d == NULL)
	{
		return (NULL);
	}
	d->name = name;
	d->age = age;
	d->owner = owner;
}
