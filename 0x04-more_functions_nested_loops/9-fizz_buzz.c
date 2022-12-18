#include "main.h"
#include <stdio.h>

/**
 * main - fizz buzz.
 *
 * Return: zero
 */
int main(void)
{
	int count;

	for (count = 1; count <= 100; count++)
	{
		if (count % 3 == 0 && count % 5 != 0)
		{
			printf("Fizz");
		}
		else if (count % 5 == 0 && count % 3 != 0)
		{
			printf("Buzz");
		}
		else if (count % 15 == 0)
		{
			printf("FizzBuzz");
		}
		else
		{
			printf("%d", count);
		}
		if (count == 100)
		{
			break;
		}
		else
			printf(" ");
	}
	printf("\n");
	return (0);
}
