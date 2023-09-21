#include "main.h"
/**
 * string_toupper - change lowercase letters to uppercase.
 * @s: analized string.
 *
 * Return: String with all letters Uppercased.
 */
char *string_toupper(char *s)
{
	int index = 0;

	while (*(s + index) != '\0')
	{
		if (*(s + index) >= 'a' && *(s + index) <= 'z')
		{
			*(s + index) = *(s + index) - 32;
		}
		index++;
	}
	return (s);
}
