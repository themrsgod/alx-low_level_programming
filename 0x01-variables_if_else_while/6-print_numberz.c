#include <stdio.h>
#include <time.h>
#include <stdlib.h>
/**
 *main - prints all single digit numbers of base 10 starting from 0
 *Return: 0
 */
int main(void)
{
	int c = '0';

	while (c <= '9')
	{
		putchar(c);
		c += 1;
	}
	putchar('\n');
	return (0);
}
