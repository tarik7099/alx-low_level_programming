#include "main.h"

/**
 * _atoi - Write a function that convert a string to an integer.
 * @s: input string.
 * Return: integer.
 */
int _atoi(char *s)
{
	int i, j, k, len, fen, isdigit;

	i = 0;
	j = 0;
	k = 0;
	len = 0;
	fen = 0;
	isdigit = 0;

	while (s[len] != '\0')
		len++;

	while (i < len && fen == 0)
	{
		if (s[i] == '-')
			++j;

		if (s[i] >= '0' && s[i] <= '9')
		{
			isdigit = s[i] - '0';
			if (j % 2)
				isdigit = -isdigit;
			k = k * 10 + isdigit;
			fen = 1;
			if (s[i + 1] < '0' || s[i + 1] > '9')
				break;
			fen = 0;
		}
		i++;
	}

	if (fen == 0)
		return (0);

	return (k);
}
