#include <stdlib.h>
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
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	if (n > 0)
	{
	printf("%d is positive\n", n);
	}
	if else(n == 0)
	{
	printf("%d is zero\n", n);
	}
	if else(n < 0)
	{
	printf("%d is negative\n", n);
	}
	return (0);
}
