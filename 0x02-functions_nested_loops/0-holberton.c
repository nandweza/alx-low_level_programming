#include "main.h"

/**
 * main - prints Holberton, followed by a new line.
 * Return: Always 0 (success)
 */

int main(void)
{
	char c[9] = "_putchar";
	int a;

	for (a = 0; a < 9; a++)
		_putchar(c[a]);
	_putchar('\n');
	return (0);
}
