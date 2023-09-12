#include "main.h"

/**
 * _alphabet - prints the alphabet in lowercase, followed by a new line.
 */
void _alphabet(void)
{
	char alpha;

	for (alpha = 'a'; alpha <= 'z'; alpha++)
		_putchar(alpha);
	_putchar('\n');
}
