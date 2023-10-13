#include "variadic_functions.h"
i#include <stdarg.h>

/**
 * sum_them_all - function that  Returns the sum of all its parameters.
 * @n: The number of parameters
 * ...: The variable-length
 *
 * Return: The sum of all the parameters, or 0 if n is 0.
 */
int sum_them_all(const unsigned int n, ...)
{
if (n == 0)
	return (0);
va_list args;
unsigned int i;
int sum = 0;
va_start(args, n);
for (i = 0; i < n; i++)
{
	sum += sum + va_arg(args, int);
}
va_end(args);
return (sum);
}
