#include "main.h"
/**
 * _strcmp - compare 2 strings.
 * @s1: string to be compared.
 * @s2: string for comparation.
 * Return: Difference.
 */

void reverse_array(int *a, int n)
{
	int  A , b, c;
	for (A = 0, b = (n - 1); A < b; A++, b--)
	{
		c = a[A];
		a[A] = a[b];
		a[b] = c;
	}
}
