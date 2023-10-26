#include "main.h"
/**
 * get_bit - Gets the value of a bit at a given index.
 * @n: The unsigned long integer
 * @index: The index of the bit
 *
 * Return: The value of the bit n
 */
int get_bit(unsigned long int n, unsigned int index)
{
if (index >= sizeof(unsigned long int) * 8)
{
return (-1);
}
return ((n / (1UL << index)) % 2);
}
