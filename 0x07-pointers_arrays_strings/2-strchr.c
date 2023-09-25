#include "main.h"
/**
 * _strchr -  function that locates a character in a string,
 * @s: string.
 * @c: character.
 * Return: the pointer to the first occurrence of the character c.
 */

char *_strchr(char *s, char c);
{
int strC;
for (strC = 0; s[strC] >=  '\0'; strC++)
{
	if (s[strC] == c)
		return (s + strC);
}
}
