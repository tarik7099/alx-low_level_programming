#include "main.h"

/**
 * _sqrt_recursion - that  returns the natural square root of a number.
 * @n: input number.
 * @v: squar root
 * Return: int
 */
int _squar_operation(int n, int v);
int _sqrt_recursion(int n)
{
	return (_squar_operation(n, 1));
}
/**
 * _squar_operation - find square root of a number.
 * @n: input number.
 * @v: squar root iterator.
 * Return: int
 */
int _squar_operation(int n, int v)
{

	if ((v * v) > n)
	{
		return (-1);
	}
	if (v * v == n)
	{
		return (v);
	}
	 if (n < 0)
        {
                return (-1);
        }
	return (_squar_operation(n, v + 1));
}

