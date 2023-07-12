#include "search_algos.h"

/*
 * binary_search -function that searches for value in a sorted array
 *  by using Binary search algorithm.
 * @array: pointer to the first element of the array
 * @size: number of elements in array
 * @value: is the value to search for
 * Return: first index where value is located
 */

int binary_search(int *array, size_t size, int value)
{
	int t;
	int mid;
	int left = 0;
	int right = size - 1;

	if (array == NULL)
		return (-1);

	while (left <= right)
	{
		printf("Searching in array: ");
		for (t = left; t < right; t++)
			printf("%d, ", array[t]);

		printf("%d\n", array[right]);
		mid = (right + left) / 2;

		if (value > array[mid])

			left = mid + 1;

		else if (value < array[mid])
			right = mid - 1;

		else
			return (mid);
	}
	return (-1);
}
