#include "main.h"

/**
 * _sqrt_recursion - that  returns the natural square root of a number.
 * @n: input number.
 * Return: int
 */
int _sqrt_recursion(int n)
{
	return (_sqrot(n, 1));
}
/**
 * _squar_oper - find square root of a number.
 * @n: input number.
 * @v: squar root iterator.
 * Return: int
 */
int _squar_oper(int n, int v)
{
if (v * v == n)
	return (v);
else if (v * v < n)
	return (squar_oper(n, v + 1));
else
	return (-1);
}
