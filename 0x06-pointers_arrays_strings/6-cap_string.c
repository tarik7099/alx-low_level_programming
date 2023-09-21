#include "main.h"
/**
 * cap_string - capitalizes most of the words in a string.
 * @s: analized string.
 *
 * Return: String with all words capitalized.
 */
char *cap_string(char *s)
{
	int index;

	index = 0;
	while (s[index] != '\0')
	{
		if ((s[index - 1] == ' ' || s[index - 1] == '\n'
		|| s[index - 1] == '\t' || s[index - 1] == ','
		|| s[index - 1] == ';' || s[index - 1] == '!'
		|| s[index - 1] == '?' || s[index - 1] == '"'
		|| s[index - 1] == '(' || s[index - 1] == ')'
		|| s[index - 1] == '{' || s[index - 1] == '}'
		|| s[index - 1] == '.')
		&& (s[index] >= 'a' && s[index] <= 'z'))
		{
			s[index] = s[index] - 32;
		}
		else if ((s[0] >= 97 && s[0] <= 122))
		{
			s[0] = s[0] - 32;
		}
		else
		{
			s[index] = s[index];
		}
		index++;
	}
	return (s);
}
