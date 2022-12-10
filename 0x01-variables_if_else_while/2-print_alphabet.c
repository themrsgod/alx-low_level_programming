#include <stdio.h>
#include <time.h>
#include <stdlib.h>
/**
 *main - print alphabet in lower case followed by a new line
 *Return: 0
 */
int main(void)
{
	char c = 'a';
	while (c <= 'z')
	{
		putchar(c);
		c += 1;
	}
	putchar('\n');
	return (0);
}
