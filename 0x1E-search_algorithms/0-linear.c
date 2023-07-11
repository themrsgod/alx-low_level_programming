#include "search_algos.h"

/*
 * search_function - function that searches for a values
 */
int linear_search(int *array, size_t size, int value)
{
	int m;

	m = -1;
	if (array == NULL)
	{
		return (m);
	}
	for (c = 0; c < (int)size; c++)
	{
		printf("Value checked array[%u] = [%d]\n", c, array[c]);
		if (value == array[c])
		{
			return (c);
		}
	}
	return (m);
}
