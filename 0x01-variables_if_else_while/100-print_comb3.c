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
	for (a = b + 1; a < 10; b++)
	{
		putchar(a);
		putchar(b);

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
