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
	int digit, digit1;

	for (digit = 0; digit < 9; digit++)
	{
		for (digit1 = digit + 1; digit1 < 10; digit1++)
		{
			putchar((digit % 10) + '0');
			putchar((digit1 % 10) + '0');

			if (digit == 8 && digit1 == 9)
				continue;
			
			putchar(',');
			putchar(' ');
		}
	}

	putchar('\n');

	return (0);
}`
