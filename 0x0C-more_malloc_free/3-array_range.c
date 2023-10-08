#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * array_range - funcion that Creates an array of integers
 * @min: The min value
 * @max: The max value
 * * Return: Pointer to the newly created array
 */
int *array_range(int min, int max)
{
	int i;
	int *integerOfarray;
	int sizeOfarray;

if (min > max)
	return (NULL);
sizeOfarray = max - min + 1;
integerOfarray = malloc(sizeOfarray *sizeof(int));
if (integerOfarray == NULL)
	return (NULL);
for (i = 0; i < sizeOfarray; i++)
	integerOfarray[i] = min + i;
return (integerOfarray);
}
