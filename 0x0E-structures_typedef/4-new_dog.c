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
char *_strcpy(char *dest, char *src)
{
	int len, i;

	len = 0;

	while (src[len] != '\0')
	{
		len++;
	}

	for (i = 0; i < len; i++)
	{
		dest[i] = src[i];
	}
	dest[i] = '\0';

	return (dest);
}
int _strlen(char *s)
{
	int i;

	i = 0;

	while (s[i] != '\0')
	{
		i++;
	}

	return (i);
}

dog_t *new_dog(char *name, float age, char *owner)
{
dog_t *dog_ptr;
int len1, len2;
if (owner == NULL || name == NULL)
	return (NULL);
dog_ptr = malloc(sizeof(dog_t));
if (dog_ptr == NULL)
	return (NULL);
len1 = _strlen(name);
len2 = _strlen(owner);

dog_ptr->name = malloc(len1 + 1);
dog_ptr->owner = malloc(len2 + 1);
if (dog_ptr->name == NULL || dog_ptr->owner == NULL)
{
free(dog_ptr->name);
free(dog_ptr->owner);
free(dog_ptr);
return (NULL);
}
_strcpy(dog_ptr->name, name);
_strcpy(dog_ptr->owner, owner);
dog_ptr->age = age;
return (dog_ptr);
}
