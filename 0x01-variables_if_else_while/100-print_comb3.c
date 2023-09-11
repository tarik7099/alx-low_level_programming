#include <time.h>
#include <stdio.h>
/**
* main - Entry point
*
* Description:positive or negative
*
* Return: Always 0 (Success)
*/
int main(void)
{
	int a, b;

for (a = 0; a < 10; a++)
{
	for (b = a + 1; a < 10; b++)
	{
		putchar(a + '0');
		putchar(b + '0');

		if (a != 8 || b != 9)
		{
		putchar(',');
		putchar(' ');
		}
	}
}

	putchar('\n');
return (0);
}
