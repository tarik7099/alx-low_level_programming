#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * _calloc - Write a function that allocates memory for an array,
 * @nmemb: First int
 * @size: Second string
 * Return: NULL
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
unsigned int i, total_si;
char *array;

if (nmemb == 0 || size == 0)
	return (NULL);
total_si = nmemb * size;
array = malloc(nmemb * size);
if (array == NULL)
	return (NULL);

for (i = 0; i < total_si; i++)
	array[i] = 0;
return (array);
}
