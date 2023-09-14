#include "main.h"

/**
 *print_triangle - prints a triangle
 *@size:size parameter of triangle
 */

void print_triangle(int size)
{
	int num1, num2, num3;

	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (num1 = 1; num1 <= size; num1++)
		{
			for (num2 = 0; num2 < (size - num1); num2++)
			{
				_putchar(' ');
			}
			for (num3 = 0; num3 < num1; num3++)
			{
				_putchar(35);
			}
			_putchar('\n');
		}
	}
}
