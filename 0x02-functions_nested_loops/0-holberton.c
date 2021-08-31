#include "main.h"

/**
 * main - prints Holberton, followed by a new line.
 * Return: Always 0 (success)
 */

int main(void)
{
	char c[10] = "Holberton";
	int a;

	for(a = 0; a < 10; a++){
		_putchar(c[a]);
	}
	_putchar('\n');
	return (0);
}
