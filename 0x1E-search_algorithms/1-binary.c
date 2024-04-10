#include "search_algos.h"
#include <stdio.h>

/**
 * print_array - Prints an array
 * @array: Pointer to the first element
 * @start: Index of the first element
 * @end: Index of the last element
 */
void print_array(int *array, size_t start, size_t end)
{
size_t i;
printf("Searching in array: ");
for (i = start; i <= end; i++)
{
printf("%d", array[i]);
if (i < end)
{
printf(", ");
}
}
printf("\n");
}

/**
 * binary_search - Searches for a value in a sorted array of integers
 *                 using the Binary search algorithm
 * @array: Pointer to the first element of the array to search in
 * @size: Number of elements in the array
 * @value: Value to search for
 *
 * Return: The index where value is located,
 *         or -1 if value is not present in array or if array is NULL
 */
int binary_search(int *array, size_t size, int value)
{
int left = 0;
int right = size - 1;
int midle;
if (array == NULL)
{
return (-1);
}

while (left <= right)
{
midle = left + (right - left) / 2;
print_array(array, left, right);

if (array[midle] == value)
{
return (midle);
}

if (array[midle] < value)
{
left = midle + 1;
}
else
{
right = midle - 1;
}
}
return (-1);
}
