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
if (c >= 97 && c <= 122)
	return (0);
else
	return (1);
}
