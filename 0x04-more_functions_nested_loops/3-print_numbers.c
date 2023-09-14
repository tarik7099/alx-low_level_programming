#include <stdio.h>
#include "main.h"
/**
 * print_numbers - function that prints the numb * ers, from 0 to 9
 * main - check the code
 * Return: Always 0.
 */
void print_numbers(void)
{
int x;

	for (x = 0; x < 10; x++)
	{
		putchar(48 + x);
	}
putchar('\n');
}
