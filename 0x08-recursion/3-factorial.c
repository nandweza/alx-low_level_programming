#include "main.h"

/**
 * factorial - returns the factorial of a given number
 * if n is lower than 0, return -1
 * @n: digit to find its factorial
 *
 * Return: 1
 */
int factorial(int n)
{
	if (n < 0)
		return (-1);
	if (n == 0)
		return (1);
	return (n * factorial(n - 1));
}
