#ifndef DOG_H
#define DOG_H

#include "main.h"
#include <stddef.h>

/**
 * struct dog - structure representing a dog
 * @name: name of the dog
 * @age: age of the dog
 * @owner: name of the dog's owner
 */

struct dog
{
	char *name;
	float age;
	char *owner;
};

#endif
