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
	int t, j;

for (t = 48; j <= 56; j++)
{
	for (m = 49; m <= 57; m++)
	{
		if (j > t)
		{
			putchar(j);
			putchar(t);
			if (t != 56 || j != 57)
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
