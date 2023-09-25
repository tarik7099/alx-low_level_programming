#include "main.h"

/**
 * _strspn -function that  gets the length of a prefix substring.
 * @s: initial segment.
 * @accept: accepted bytes.
 * Return: the number of accepted bytes.
 */
unsigned int _strspn(char *s, char *accept)
{
unsigned int strS, jtrS;
for (strS = 0; strS != '\0'; strS++)
	for (jtrS = 0; accept[jtr] != s[strS]; jtrS++)
	{
		if (accept[strS] == s[strS])
			return (strS);
	}
	return (strS);
}
