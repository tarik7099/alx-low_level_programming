#include <stdlib.h>
#include <string.h>
#include "main.h"

/**
 * string_nconcat - function Concatenates two strings
 * @s1: First string
 * @s2: Second string
 * @n: length of s2
 * Return: Pointer to newly allocated space
 * in memory containing concatenated string
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
unsigned int len1, len2, i, j;
char *result;
if (s1 == NULL)
	s1 = "";

if (s2 == NULL)
	s2 = "";

for (len1 = 0; s1[len1] != '\0'; len1++)
	;

for (len2 = 0; s2[len2] != '\0'; len2++)
	;
if (n >= len2)
	n = len2;
result = malloc((len1 + n + 1) * sizeof(char));
if (result == NULL)
	return (NULL);
for (i = 0; i < len1; i++)
	result[i] = s1[i];

for (j = 0; j < n; i++, j++)
	result[i] = s2[j];
result[i] = '\0';
	return (result);
}
