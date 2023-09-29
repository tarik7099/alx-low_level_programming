#include "main.h"

/**
 * factorial - fonction  returns the factorial of a given number.
 * @facnum: input number.
 * Return: factorial of the number.
 */
int factorial(int facnum)
{
	if (facnum < 0)
	{
		return (-1);
	}
	if (facnum == 1)
	{
		return (1);
	}
	return (facnum * factorial(facnum - 1));
}
