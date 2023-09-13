#include "main.h"
/**
*times_table -  function prints the 9 times table
*
*Return: return  1
*/
void times_table(void)
{
int call, mult, total;
for (call = 0; call <= 9; call++)
{
	_putchar('0');

for (mult = 1; mult <= 9; mult++)
{
	_putchar(',');
	_putchar(' ');
total = call * mult;
if (total <= 9)
	_putchar(' ');
else
	_putchar((total / 10) + '0');

	_putchar((total % 10) + '0');
}
	_putchar('\n');
}
}
