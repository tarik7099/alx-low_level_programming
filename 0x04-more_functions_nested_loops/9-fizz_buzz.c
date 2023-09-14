#include <stdio.h>

/**
 *main - program that prints either number
 *or fizz or buzz or fizzBuzz
 * Return: 0 (success)
 */
int main(void)
{
	int num1;

	for (num1 = 1; num1 <= 100; num1++)
	{
		if (num1 % 3 == 0 && num1 % 5 == 0)
		{
			printf("FizzBuzz");
		}
		else if (num1 % 3 == 0 && !(num1 % 5 == 0))
		{
			printf("Fizz");
		}
		else if (num1 % 5 == 0 && !(num1 % 3 == 0))
		{
			printf("Buzz");
		}
		else
		{
			printf("%d", num1);
		}


		if (num1 != 100)
		{
			putchar(' ');
		}
		else
		{
			putchar('\n');
		}
	}

	return (0);
}
