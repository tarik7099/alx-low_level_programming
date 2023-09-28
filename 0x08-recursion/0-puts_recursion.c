#include "main.h"

/**
 * _puts_recursion - function prints a string, followed by a new line.
 * @C: string
 * Return: no return.
 */

void _puts_recursion(char *C)
{
	if (*C != '\0')
	{
		_putchar(*C);
		_puts_recursion(C + 1);
	}
	else
	{
	_putchar('\n');
	}
}

