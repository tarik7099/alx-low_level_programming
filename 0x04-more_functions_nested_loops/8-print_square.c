#include "main.h"

/**
 * print_square - a function that prints a square, followed by a new line.
 * @size:  is the size of the square
 */

void print_square(int size)
{
	int num1, num2;

	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (num1 = 0; num1 < size; num1++)
		{
			for (num2 = 0; num2 < size; num2++)
			{
				_putchar(35);
			}
			_putchar('\n');
		}
	}
}
