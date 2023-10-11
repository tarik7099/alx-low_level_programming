
#include <stddef.h>
#include "function_pointers.h"
/**
 * int_index -function  Searches for an integer in
 * an array using a comparison function.
 * @array: The Pointer of array.
 * @size: The number of elements in the array.
 * @cmp: A pointer to the comparison function.
 * Return: The index of the first element that matches the comparison function,
 * or -1 if no element matches.
 */

int int_index(int *array, int size, int (*cmp)(int))
{
int i;
if (array == NULL || cmp == NULL || size <= 0)
return (-1);
for (i = 0; i < size; i++)
{
if (cmp(array[i]))
{
return (i);
}
}
return (-1);
}
