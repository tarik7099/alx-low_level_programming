#include "main.h"
/**
 * _strcat - concatenates 2 strings.
 * @dest: string with concatenation
 * @src: string to be concatenated
 * Return: Always 0.
 */
char *_strcat(char *dest, char *src)
{
	int lenD, lenS;

	lenD = 0;

	while (dest[lenD])
		lenD++;

	for (lenS = 0; src[lenS]; lenS++)
	{
		dest[lenD++] = src[lenS];

	}
	return (dest);
}
