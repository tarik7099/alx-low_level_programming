#include "main.h"
#include <stdio.h>

/**
 * print_array - prints n elements of an array of integers.
 * followed by a new line.
 * @a: input array.
 * @n: input n elements
 * Return: Nothing
 */
void print_array(int *a, int n)
{
	int j = 0;

	for (; j < n; j++)
	{
		printf("%d", *(a + j));
		if (j != (n - 1))
			printf(", ");
	}
	printf("\n");
}
