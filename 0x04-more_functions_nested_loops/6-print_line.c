#include "main.h"
/**
 * print_line -  function that draws a straight line in the terminal.
 * main - check the code
 * @n:input
 * Return: Always 0.
 */

void print_line(int n)
{
	int intchar;

	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (intchar = 0; intchar < n; intchar++)
		{
			_putchar('_');
		}
		_putchar('\n');
	}
}
