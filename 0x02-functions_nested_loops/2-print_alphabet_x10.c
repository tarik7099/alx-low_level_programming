#include "main.h"

/**
 * _alphabet - prints the alphabet in lowercase, followed by a new line.
 */
void _alphabet(void)
{
	char letter;

	for (letter = 'a'; letter <= 'z'; letter++)
		_putchar(letter);
	_putchar('\n');
}
