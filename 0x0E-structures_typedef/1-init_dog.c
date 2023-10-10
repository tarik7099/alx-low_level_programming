#include <stdio.h>
#include <stdlib.h>
#include "dog.h"
/**
 * init_dog - initializes a variable of type struct dog.
 * @d: structure  dog.
 * @name: name of  dogs.
 * @age: age of  dogs.
 * @owner: owner of  dogs.
 *
 * Return: no return.
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

