#include "main.h"

/**
 * _puts - prints a string
 * @str: the string
 * Return: the length of the string
 */
void _puts(char *str)
{
	int a = 0;

	while (str[c] != '\0')
	{
		_putchar(str[a]);
		a++;
	}
	_putchar('\n');
}
