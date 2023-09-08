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

for (t = '0'; t <= '9'; t++)
{
	for (j = '0'; j <='9'; j++)
	{
		if (j > t)
		{
			putchar(j);
			putchar(t);
			if (t != '8' || j != '9')
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
