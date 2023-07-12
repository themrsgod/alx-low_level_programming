#include "search_algos.h"

/*
 * search_function - function that searches for a values
 * @array: - is a pointer to the first element of the array to search in
 * @size: - is the number of elements in array
 * @value: - is the value to search for
 * Return: - the first index where value is located
 */
int linear_search(int *array, size_t size, int value)
{
	int m;

	m = -1;
	if (array == NULL)
	{
		return (m);
	}
	for (m = 0; m < (int)size; m++)
	{
		printf("Value checked array[%u] = [%d]\n", m, array[m]);
		if (value == array[m])
		{
			return (m);
		}
	}
	return (-1);
}
