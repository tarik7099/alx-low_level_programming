#include "main.h"
/**
 * print_most_numbers -  function that prints the numbers, from 0 to 9
 * @num1: input
 * Return: Always 0.
 */
void print_most_numbers(void)
{

	int num1;

for (num1 = 0; num1 <= 9; num1++)
	{
		if (num1 == 2 || num1 == 4)
			continue;
		_putchar(48 + num1);
	}
	_putchar('\n');
}
