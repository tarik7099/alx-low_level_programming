#include "main.h"
/**
 * print_most_numbers -  function that prints the numbers, from 0 to 9
 * Return: Always 0.
 */
void print_most_numbers(void)
{

	int inp;

	for (inp = 0; inp <= 9; inp++)
	{
		if (inp == 2 || inp == 4)
			continue;
		_putchar(48 + inp);
	}
	_putchar('\n');
}
