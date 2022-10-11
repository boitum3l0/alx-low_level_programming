#include "main.h"

/**
 * print_dog - prints the struct
 * @d: pointer to dog info
 */
void print_dog(struct dog *d)
{
	int counter = 0;

	if (d == NULL)
	{
		return;
	}
	else if (d->name == NULL)
	{
		d->name = "(nil)";
	}
	else if (d->age == NULL)
	{
		d->age = "(nill)";
	}
	else if (d->owner == NULL)
	{
		d->owner = "(nil)";
	}
	else
	{
		printf("Name: %s\nAge: %f\nOwner: %s\n", d->name, d->age, d->owner);
	}
}
