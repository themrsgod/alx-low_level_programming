#include <stdio.h>
/**
 *main - prints in lowercase, followed by a new line
 *Return: 0
 */
int main(void)
{
	char y = 'a';

	while (y <= 'z')
	{
		if (y != 'q' && y != 'e')
		{
			putchar(y);
		}
		y++;
	}
	putchar('\n');
	return (0);
}
