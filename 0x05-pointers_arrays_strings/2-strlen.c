#include "main.h"
#include <string.h>

/**
 * _strlen - returns the length of a string.
 * @s: string to evaluate
 * Return: the length of the string
 */
int _strlen(char *s)
{
	int a;

	while (s[a] != '\0')
	{
		a++;
	}
	return (a);
}
