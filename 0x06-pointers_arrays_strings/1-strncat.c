#include "main.h"
#include <string.h>

/**
 * _strncat - concatenates n bytes from one string to another.
 * @n: number of bytes of string to concatenate
 * @dest: destination string
 * @src: source string
 * Return: a pointer to the resulting string dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int i, j;

	i = 0;
	j = 0;

	while (dest[i] != '\0')
	{
		i++;
	}
	while (src[j] != '\0' && j < n)
	{
		dest[i] = src[j];
		j++;
		i++;
	}
	dest[i] = '\0';

	return (dest);
}
