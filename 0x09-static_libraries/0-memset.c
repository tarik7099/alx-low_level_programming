#include "main.h"

/**
 * _memset - fills memory with a constant byte,
 * @s: memory area.
 * @b: constant byte.
 * @n: bytes filled.
 * Return: the pointer to dest S.
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int memS;

	for (memS = 0; memS < n; memS++)
	{
	s[memS] = b;
	}

	return (s);
}
