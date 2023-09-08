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
	char alpha ;

	for (alpha = 'a' ; alpha <= 'z' ; alpha++)
	{
		if (alpha != 'e' && alpha != 'q')
		{
			putchar(alpha);
		}
		alpha++;
	}
	alpha('\n');
	return (0);
}
