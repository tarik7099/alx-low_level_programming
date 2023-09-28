#include "main.h"

/**
 * _strlen_recursion -fonction that  returns the length of a string.
 * @C: string
 * Return: the length of a string.
 */
int _strlen_recursion(char *C)
{
	if (*C == '\0')
		return (0);
	else
		return (1 + _strlen_recursion(C + 1));
}
