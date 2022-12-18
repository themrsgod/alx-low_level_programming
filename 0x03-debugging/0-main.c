#include "main.h"

/**
 * positive_or_negative - testing functions
 * @n: an integer
 * Return: 0
 */
void positive_or_negative(int n)
{
	if (n > 0)
		printf("%d is positive\n", n);
	else if (n < 0)
		printf("%d is negative\n", n);
	else
		printf("%d is zero\n", n);
	return (0);
}
