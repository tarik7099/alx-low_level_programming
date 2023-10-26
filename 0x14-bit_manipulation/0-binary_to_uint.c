#include "main.h"
#include <stddef.h>
/**
 * binary_to_uint - function converts a binary number to unsigned int
 * @b: string containing
 * Return: the converted
 */
unsigned int binary_to_uint(const char *b)
{
int i = 0;
unsigned int num = 0;

if (b == NULL)
return (0);
while (b[i])
{
if (b[i] < '0' || b[i] > '1')
	return (0);
num = 2 * num + (b[i] - '0');
i++;
}
return (num);
}
