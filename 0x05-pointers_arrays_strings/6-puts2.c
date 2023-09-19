#include "main.h"

/**
 * puts2 -  function that prints half of a string,
 * followed by a new line.
 * @str: string to print the chars from
 */
void puts2(char *str)
{
int pair, length;
length = 0;
while (str[length] != '\0')
	length++;
for (pair = 0; pair < length ; pair += 2)
	_putchar(str[pair]);
_putchar('\n');
}

