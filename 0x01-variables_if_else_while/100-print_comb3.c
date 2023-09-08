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
	int n, x;

	for (n = 48; n <= 56; n++)
	{
		for (x = 49; x <= 57; x++)
		{
			if (m > n)
			{
				putchar(n);
				putchar(x);
				if (n != 56 || x != 57)
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
