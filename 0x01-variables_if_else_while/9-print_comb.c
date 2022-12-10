#include <stdio.h>
#include <stdlib.h>
/**
 *main - prints all possible combinations of single-digit numbers
 *Return: (0)
 */
int main(void)
{
	int v = '0';

	while (v <= '9')
	{
		putchar(v);
		if (v != '9')
		{
			putchar(',');
			putchar(' ');
		}
		v += 1;
	}
	putchar('\n');
	return (0);
}
