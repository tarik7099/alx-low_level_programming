#include "main.h"
/**
 * _strncat - concatenate strings, defining the size of second string.
 * @dest: string with concatenation
 * @src: string to be concatenated
 * @n: size of second string
 * Return: Always 0.
 */
char *_strncat(char *dest, char *src, int n)
{
	int lenD;

	for (lenD = 0; lenD < n && src[lenD] != '\0'; lenD++)
		dest[lenD] = src[lenD];

	while (lenD < n)
	{
		dest[lenD] = '\0';
		lenD++;
	}
	return (dest);
}
