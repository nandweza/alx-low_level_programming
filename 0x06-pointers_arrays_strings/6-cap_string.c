#include "main.h"
#include <ctype.h>

/**
 * cap_string - capitalizes all words of a string
 * @s: string to be modified
 * Return: the resulting string
 */
char *cap_string(char *s)
{
	char c[13] = {' ', '\t', '\n', ',', ';', '.', '!', '?', '"', '(', ')',
		      '{', '}'};
	int i, j;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (i == 0 && s[i] >= 'a' && s[i] <= 'z')
			s[i] = s[i] - 32;
		for (j = 0; j < 13; j++)
		{
			if (s[i] == c[j])
			{
				if (s[i + 1] >= 'a' && s[i + 1] <= 'z')
				{
					s[i + 1] = s[i + 1] - 32;
				}
			}
		}
	}
	return (s);
}
