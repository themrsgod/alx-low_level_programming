#include "main.h"

/**
 * print_numbers - that prints the numbers, from 0 to 9
 *
 * Return: 0.
 */
void print_numbers(void)
{
	int a;

	for (a = 0; a <= 9; a++)
	{
		_putchar('0' + a);
	}
	_putchar('\n');
}
