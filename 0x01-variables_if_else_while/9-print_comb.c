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
int x = 0;
for (x = 0 ; x <= 9 ; x++)
{
putchar(x + 0);
	if (x != 9)
	putchar(' ');
	putchar(',');
}
putchar('\n');
return (0);
}
