#include "main.h"
#include <stdio.h>
/**
  * print_rev - function that prints a string in reverse
  * @s: The string to print
  *
  * Return: void
  */

void print_rev(char *s)
{
	int i = 0;

	for (; s[i] != '\0'; i++)
	{
	}

	for (i -= 1 ; i >= 0 ; i--)
	{
		_putchar(s[i]);
	}

	_putchar('\n');
}
