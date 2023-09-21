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
	int lenD, lenS;

	lenD = 0;
	lenS = 0;

	while (*(dest + lenD) != '\0')
		lenD++;

	while (*(src + lenS) != '\0' && lenD < 97 && lenS < n)
	{
		*(dest + lenD) = *(src + lenS);
		lenD++;
		lenS++;
	}
	*(dest + lenD) = '\0';
	return (dest);
}
