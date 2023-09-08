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
char x;
char n;
for (n = '0'; n <= '9' ; n++)
	putchar(n);
for (x = 'a'; x <= 'f' ; x++)
	putchar(x);
putchar('\n');
return (0);
}
