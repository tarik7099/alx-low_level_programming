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
char print_alphabet = 'a';
while (print_alphabet <= 'z')
	{	putchar(print_alphabet);
		print_alphabet++;
	}
putchar('\n');
return (0);
}
