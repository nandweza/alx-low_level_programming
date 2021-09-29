#include "3-calc.h"

/**
 * op_add - adds a and b
 * @a: first digit to add
 * @b: second digit to add
 *
 * Return: the sum of a and b
 */
int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - calculate the difference of a and b
 * @@a: first digit
 * @b: second digit
 *
 * Return: the difference of a and b
 */
int op_sub(int a, int b)
	   {
		   return (a - b);
	   }

/**
 * op_mul - calculates the product of a and b
 * @a: first digit
 * @b: second digit
 *
 * Return: the product of a and b
 */
int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - calculates the result of divion of a and b
 * @a: first digit
 * @b: second digit
 *
 * Return: the result of the division of a and b
 */
int op_div(int a, int b)
{
	return (a / b);
}

/**
 * op_mod - calculate the remainder of the division of a and b
 * @a: first digit
 * @b: second digit
 *
 * Return: the remainder of the division of a and b
 */
int op_mod(int a, int b)
{
	return (a % b);
}
