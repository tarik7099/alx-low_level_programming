#include "main.h"
#include <string.h>
/**
 * _strncat - concatenate strings, defining the size of second string.
 * @dest: string with concatenation
 * @src: string to be concatenated
 * @n: size of second string
 * Return: Always 0.
 */
char *_strncat(char *dest, char *src, int n)
{
	int lenD = strlen(dest);
	int i = 0;

	while (i < n && *src)
	{
		dest[lenD + i] = *src;
		src++;
		i++;
	}
	dest[lenD + i] = '\0';
	return (dest);
}

