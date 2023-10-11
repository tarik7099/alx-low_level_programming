#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "dog.h"

/**
 * new_dog - function that Creates a new dog with a copy of name and owner.
 * @name:  name dogs.
 * @age: age of the dogs.
 * @owner: owner dogs.
 * Return: A pointer to the new dog, or NULL on failure.
 */

dog_t *new_dog(char *name, float age, char *owner)
{
int name_len, owner_len;
dog_t *dog_ptr;
if (owner == NULL || name == NULL)
	return (NULL);
dog_ptr = malloc(sizeof(dog_t));
if (dog_ptr == NULL)
	return (NULL);
for (name_len  = 0; name[name_len]; name_len++)
{
;
}
for (owner_len = 0; owner[owner_len]; owner_len++)
{
;
}
dog_ptr->name = malloc(name_len);
dog_ptr->owner = malloc(owner_len);
if (dog_ptr->name == NULL || dog_ptr->owner == NULL)
{
free(dog_ptr->name);
free(dog_ptr->owner);
free(dog_ptr);
return (NULL);
}
dog_ptr->age = age;
return (dog_ptr);
}
