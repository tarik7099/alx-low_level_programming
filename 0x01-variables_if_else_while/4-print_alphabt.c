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
	char alpha = 'a';

	while (alpha <= 'z')
	{
		if (alpha == 'e' || alpha == 'q')
			alpha++;
		putchar(alpha);
		alpha++;
	}
	putchar('\n');
	return (0);
}
