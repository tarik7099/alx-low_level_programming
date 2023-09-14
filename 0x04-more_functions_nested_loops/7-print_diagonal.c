#include "main.h"

/**
 * print_diagonal - a function that draws a diagonal line on the terminal.
 * @n: length of line
 */
void print_diagonal(int n)
{
	int num1, num2;

	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (num1 = 0; num1 < n; num1++)
		{
			num2 = 1;
			while (num2 <= num1)
			{
				_putchar(' ');
				num2++;
			}
			_putchar('\\');
			_putchar('\n');
		}
	}
}
