#include<stdio.h>
#include "main.h"
/**
 * _isupper - function that checks for uppercase character.
 * main - check the code.
 *@c: input for char
 * Return: Always 0.
 */
int _isupper(int c)
{
if (c >= 65 && c <= 90)
	return (1);
else
	return (0);
}
