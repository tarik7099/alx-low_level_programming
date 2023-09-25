#include "main.h"
#include <stdio.h>

/**
 * *_strstr - function that locates a substring
 * @haystack: string to search in
 * @needle: substring to look for
 *
 * Return: Null
 */
char *_strstr(char *haystack, char *needle)
{
	int str, jtr;

	for (str = 0; haystack[str] != '\0'; str++)
	{
		for (jtr = 0; needle[jtr] != '\0'; jtr++)
		{
			if (haystack[str + jtr] != needle[jtr])
				break;
		}
		if (!needle[jtr])
			return (&haystack[str]);
	}
	return (NULL);
}
