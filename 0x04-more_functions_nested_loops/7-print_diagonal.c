#include "main.h"

/**
 * print_diagonal - draws a diagonal line
 * @n: number of times character \ should be printed
 */
void print_diagonal(int n)
{
	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		int a;

		for (a = 1; a <= n; a++)
		{
			_putchar('\\');
		}
		_putchar('\n');
	}
}
