#include "main.h"

/**
 * _pow_recursion - fonction returns the value of x raised to the power of y.
 * @value: base.
 * @power: exponent.
 * Return: value of the exponent
 */

int _pow_recursion(int value, int power)
{
	if (power < 0)
	{
		return (-1);
	}
	else if (power == 0)
	{
		return (1);
	}
	else
		return (power * _pow_recursion(value, power - 1));
}
