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
int i = 0, j = 0;
char *conste;
if (str == 0)
{
	return (NULL);
}
for (; str[j] != '\0'; j++)
{
	;
}
conste = malloc(i * sizeof(*str) + 1);
if (conste == 0)
	return (NULL);
else
{
	for (; i < j; i++)
	{
		conste[i] = str[i];
	}
}
return (conste);
}
