#ifndef DOG_H
#define DOG_H

#include <stdio.h>
#include <stdlib.h>

/*
 * File: dog.h
 * Desc: Header file describing structure types
 */

/**
 * struct dog - Structure type for a dog
 * @name: Name of dog
 * @age: age of dog
 * @owner: name of dog owner
 */

struct dog
{
	char *name;
	float age;
	char *owner;
};

void init_dog(struct dog *d, char *name, float age, char *owner);

#endif
