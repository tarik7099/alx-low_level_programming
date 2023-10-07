#include <stdlib.h>
#include "main.h"

/**
 * string_nconcat - Write a function that concatenates two strings.
 * @s1: The first string.
 * @s2: The second string.
 * @n: The length of copy in s2
 *
 * Return: A pointer to the newly allocated concatenated string.
 *         If malloc fails or n is greater than or equal to the length of s2,
 *         return NULL.
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
unsigned int len1 = 0, len2 = 0, i, j;
char *result;

if (s1 == NULL)
{
	s2 = "";
}
if (s2 == NULL)
	s2 = "";
while (s1[len1] != '\0')
{
	len1++;
}
while (s2[len2] != '\0')
{
	len2++;
}
if (n >= len2)
	n = len2;
result = malloc(sizeof(char) * (len1 + n + 1));
if (result == NULL)
{
return (NULL);
}

for (i = 0; i < len1; i++)
{
result[i] = s1[i];
}
for (j = 0; j < n; j++, i++)
{
result[i] = s2[j];
}

result[i] = '\0';

return (result);
}

