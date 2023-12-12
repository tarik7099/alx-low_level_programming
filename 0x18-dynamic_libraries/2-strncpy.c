#include "main.h"
/**
 * _strncpy -  function that copies a string..
 * @src: cadena a copiar
 * @dest: destino de la cadena.
 * @n: number.
 * Return: void
 */
char *_strncpy(char *dest, char *src, int n)
{
	int index;

	index = 0;

	while (src[index] != '\0' && index < n)
	{
		dest[index] = src[index];
		index++;
	}

	while (index < n)
	{
		dest[index] = '\0';
		index++;
	}

	return (dest);
}
