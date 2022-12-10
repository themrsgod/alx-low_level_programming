#include <stdio.h>
/**
 *main - prints the lowercase alphabet in reverse
 *Return: 0
 */
int main(void)
{
	char u = 'z';

	while (u >= 'a')
	{
		putchar(u);
		u--;
	}
	putchar('\n');
	return (0);
}
