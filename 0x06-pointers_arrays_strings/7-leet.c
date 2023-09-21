#include "main.h"
/**
 * leet -  encodes a string into 1337.
 * @s: string to code
 * Return: the enconde string.
 */
char *leet(char *s)
{
	char A[] = "aeotlAEOTL";
	char N[] = "4307143071";
	int I = 0;
	int J;

	while (*(s + I) != '\0')
	{
		for (J = 0; J <= 9; J++)
		{
			if (*(s + I) == a[J])
			{
				*(s + I) = n[J];
			}
		}
		I++;
	}
	return (s);
}
