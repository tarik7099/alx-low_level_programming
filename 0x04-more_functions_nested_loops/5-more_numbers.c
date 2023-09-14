#include "main.h"
/**
 * more_numbers - a function that prints 10 time
 * Return: Always 0.
 */

void more_numbers(void)
{
	int num1, num2, count;

	for (num2 = 1; num2 <= 10; num2++)
	{
		for (num1 = 0; num1 <= 14; num1++)
		{
			count = num1 % 10;

			if (num1 >= 10)
			{
				_putchar(48 + num1 / 10);
			}
			_putchar(48 + count);
		}
		_putchar('\n');
	}
}
