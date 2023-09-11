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

for (a = 48; a <= 56; a++)
{
	for (b = 49; b <= 57; b++)
	{
		putchar(a);
		putchar(b);

		if (a != 56 || b != 57)
		{
		putchar(',');
		putchar(' ');
		}
	}
}

	putchar('\n');
return (0);
}
