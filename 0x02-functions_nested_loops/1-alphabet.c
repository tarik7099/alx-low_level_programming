#include "main.h"

/**
 * print_alpha - prints the alphabet in lowercase, followed by a new line.
 */
void print_alpha(void)
{
	char let1;

	for (let1 = 'a'; let1 <= 'z'; let1++)
		_putchar(let1);
	_putchar('\n');
}
