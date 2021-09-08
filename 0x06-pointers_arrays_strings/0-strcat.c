#include "main.h"
#include <string.h>

/**
 * _strcat - concatenates two strings.
 * @dest: string to be appended to
 * @src: string to append
 * Return: a pointer to the resulting string dest.
 */
char *_strcat(char *dest, char *src)
{
	int i, j;

	i = 0;
	j = 0;

	while (dest[i] != '\0')
	{
		i++;
	}
	while (src[j] != '\0')
	{
		j++;
		i++;
	}

	dest[i] = '\0';

	return (dest);
}
