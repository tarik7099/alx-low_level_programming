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
char alpha;
for (alpha = 'a' ; alpha <= 'z' ; alpha++)
	{
	putchar(alpha);
	}
for (alpha = 'A' ; alpha <= 'Z' ; alpha++)
	{
	putchar(alpha);
	}
	putchar('\n');
	return (0);
}
