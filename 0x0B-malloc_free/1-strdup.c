#include "main.h"
#include <stdlib.h>

/**
 * _strdup -fonction  returns a pointer to a newly allocated space in memory
 * @str: the string to duplicate
 *
 * Return: 1 or NULL
 */
char *_strdup(char *str)
{
unsigned int i, j;
char *conste;
if (str == 0)
{
	return (NULL);
}
for (i = 0; str != '\0'; i++)
{
	;
}
conste = malloc(i * sizeof(*str) + 1);
if (conste == 0)
	return (NULL);
else
{
	for (j = 0; j < str; j++)
	{
		conste[j] = str[i];
	}
}
return (conste);
}
