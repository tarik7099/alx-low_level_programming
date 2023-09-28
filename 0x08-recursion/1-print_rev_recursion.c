#include "main.h"

/**
 * _print_rev_recursion -  function prints a string in reverse.
 * @C: pointer to stirng
 * Return: no return.
 */
void _print_rev_recursion(char *C)
{
	if (*C != '\0')
	{
		_print_rev_recursion(C + 1);
		_putchar(*C);
	}
}
