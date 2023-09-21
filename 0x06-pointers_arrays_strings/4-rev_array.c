#include "main.h"
/**
 * reverse_array -  function that reverses the content of an array of integers.
 * @a: puntero del array.
 * @n: numero de elementos del array.
 *Return: nothing
 */
void reverse_array(int *a, int n)
{
int i, b, c;
	for (i = 0, b = (n - 1); i < b; i++, b--)
	{
		c = a[i];
		a[i] = a[b];
		a[b] = c;
	}
}
