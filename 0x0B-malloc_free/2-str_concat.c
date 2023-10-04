#include "main.h"
#include <stdlib.h>

/**
 * str_concat - fonction concatenates two strings
 * @s1: first string
 * @s2: second string
 *
 * Return: pointer should point to a newly allocated
 * space in memory which contains the contents of s1,
 */
char *str_concat(char *s1, char *s2)
{
	char *conste;
	int sizeC1 = 0, sizeC2 = 0, i, j;
if (s1 == NULL)
	s1 = "";
if (s2 == NULL)
	s2 = "";
while (s1[sizeC1])
	sizeC1++;
while (s2[sizeC2])
	sizeC2++;	
conste = malloc((sizeC1 + sizeC2 + 1) * sizeof(char));
if (conste == 0)
{
	return (NULL);
}
for (i = 0; i < sizeC1; i++)
{
	conste[i] = s1[i];
}
for (j = 0; j < sizeC2; j++)
{
	conste[i + j] = s2[j];
}
conste[i + j] = '\0';
return (conste);
}
