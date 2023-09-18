#include "main.h"

/**
  * _puts -  function that prints a string, followed by a new line, to
  * @str: The string to print
  *
  * Return: Nothing
  */
void _puts(char *str)
{
	for (; *str != '\0'; str++)
	{
		_putchar(*str);
	}

	_putchar('\n');
}
