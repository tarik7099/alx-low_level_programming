#include "main.h"
/**
 * print_binary -function  Prints the binary representation of an unsigned long int
 * @n: The number to be converted and printed
 */

void print_binary(unsigned long int n)
{
if (n > 1)
{
print_binary(n >> 1);
}
_putchar((n & 1) + '0');
}
