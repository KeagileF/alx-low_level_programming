#include "search_algos.h"

/**
 * linear_search -  Function that searches for a value in an array of
 * .....integers using the Linear search algorithm
 * @array: Array to search in.
 * @size: The length of the array.
 * @value: The value to look for.
 *
 * Return: First index of the value in the array, otherwise -1.
 */
int linear_search(int *array, size_t size, int value)
{
	size_t i;

	for (i = 0; (i < size) && (array); i++)
	{
		if (*(array + i) == value)
		{
			printf("Value checked array[%d] = [%d]\n", (int)i, *(array + i));
			return (i);
		}
		else
		{
			printf("Value checked array[%d] = [%d]\n", (int)i, *(array + i));
		}
	}
	return (-1);
}
