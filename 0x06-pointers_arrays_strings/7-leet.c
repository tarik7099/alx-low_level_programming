#include "main.h"
/**
 * leet - change vowels to numbers.
 * @s: analized string.
 *
 * Return: String with all vowels changed.
 */
char *leet(char *s)
{
int a;
int b;
int c;

char l[] = "oOlLeEaAtT";
char e[] = "0011334477";

a = 0;
while (s[a] != '\0')
{
b = 0;
c = 0;
while (l[b] != '\0')
{
if (s[a] == l[b])
	{
		c = b;
		s[a] = e[c];
	}
	b++;
}
	a++;
	}
	return (s);
}
