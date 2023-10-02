#include "main.h"
#include <stdio.h>
/**
 * _strpbrk - searches a string for any of a set of bytes.
 * @s: first string.
 * @accept: second string.
 * Return: a pointer to the byte in s that matches one of the
 * bytes in accept, or NULL if no such byte is found.
 */

char *_strpbrk(char *s, char *accept)
{
	int str, jtr;

	for (str = 0; *s != '\0'; str++)
	{
		for (jtr = 0; accept[jtr] != '\0'; jtr++)
		{
			if (*s == accept[jtr])
			{
				return (s);
			}
		}
		s++;
	}

	return (NULL);
}
