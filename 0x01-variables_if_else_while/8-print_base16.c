#include <stdio.h>
#include <stdlib.h>
/**
 *main - prints all the numbers of base 16 in lowercase
 *Return: 0
 */
int main(void)
{
	char p = '0';

	while (p <= '9')
	{
		putchar(p);
		p += 1;
	}

	p = 'a';
	while (p <= 'f')
	{
		putchar(p);
		p += 1;
	}
	putchar('\n');
	return (0);
}
