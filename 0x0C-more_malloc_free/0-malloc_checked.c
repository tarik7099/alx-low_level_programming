#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * malloc_checked -  function taht Allocates memory using malloc
 * @b: The size of the memory block to allocate
 *
 * Return: A pointer to the allocated memory block
 *         If malloc fails, the function terminates the program with status 98
 */

void *malloc_checked(unsigned int b)
{
void *p = malloc(b);
if (p == NULL)
{
exit(98);
}
return (p);
}

