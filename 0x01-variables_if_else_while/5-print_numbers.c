#include <stdio.h>
#include <time.h>
#include <stdlib.h>
/**
 *main - prints all single digit numbers of base 10 starting from 0
 *Return: 0
 */
int main(void)
{
	char k = 0;

	while (k < 10)
	{
		printf("%i", k);
		k += 1;
	}
	putchar('\n');
	return (0);
}
