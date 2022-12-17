#include "main.h"

/**
 * print_last_digit - print last digit of any number.
 * @num: to be computed
 * Return: last digit.
 */
int print_last_digit(int num)
{
	int last_digit = num % 10;

	if (last_digit < 0)
	{
		last_digit *= -1;
	}
	_putchar(last_digit + '0');
	return (last_digit);
}
