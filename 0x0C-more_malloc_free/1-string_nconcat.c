#include <stdlib.h>
#include <string.h>

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
unsigned int len1, len2, i;
char *result;
if (s1 == NULL)
	s1 = "";

if (s2 == NULL)
	s2 = "";

while (s1[len1] != '\0')
	len1++;
while (s2[len2] != '\0')
	len2++;
if (n >= len2)
	n = len2;
result = malloc((len1 + n + 1) * sizeof(char));
if (result == NULL)
	return (NULL);
for (i = 0; i < len1; i++)
	result[i] = s1[i];

for (i = 0; i < n; i++)
	result[len1 + i] = s2[i];
result[len1 + n] = '\0';
	return (result);
}
