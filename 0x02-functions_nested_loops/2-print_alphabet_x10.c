#include "main.h"
#include "main.h"
/**
 * main - check the code.
 * print_alphabet_x10 -  function that prints 10 times the alphabet
 * Return: Always 0.
 */
void print_alphabet_x10(void)
{
	int counter = 0;
	char alpha;

	while (counter++ <= 9)
	{
		for (alpha = 'a'; alpha <= 'z'; alpha++)
			_putchar(alpha);
		_putchar('\n');
	}
}
