#include <stdio.h>
/**
 *main - prints in lowercase, then in uppercase, followed by new line
 *Return:0
 */
int main(void)
{
	char b = 'a';

	while (b <= 'z')
	{
		putchar(b);
		b += 1;
	}
	b = 'A';

	while (b <= 'Z')
	{
		putchar(b);
		b += 1;
	}
	putchar('\n');
	return (0);
}
