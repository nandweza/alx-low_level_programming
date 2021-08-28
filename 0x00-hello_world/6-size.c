#include <stdio.h>

/*
 * main - prints size of various types
 *return: 0 if exited properly
 */
int main (void)
{
	printf("The size of int: is %d byte(s)\n", sizeof(int));
	printf("The size of char: is %d byte(s)\n", sizeof(char));
	printf("The size of float: is %d byte(s)\n", sizeof(float));
	printf("The size of long int: is %d byte(s)\n", sizeof(long int));
	printf("The size of long long int: is %d byte(s)\n", sizeof(long long int));
	return (0);
}