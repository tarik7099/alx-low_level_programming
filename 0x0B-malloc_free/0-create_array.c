#include "holberton.h"
#include <stdlib.h>
/**
 * create_array -  function creates an array of chars.
 * @size: size of the array.
 * @c: char
 * Return: NULL or 1
 */
char *create_array(unsigned int size, char c)
{
char *arrayOfchar;
unsigned int  n;
if (size == 0)
{
return (NULL);
}
arrayOfchar = malloc(n * sizeof(char));
if (arrayOfchar == 0)
{
        return (NULL);
}
for (n = 0; n < size; n++)
{
        arrayOfchar[n] = c;
}
return (arrayOfchar);
}
