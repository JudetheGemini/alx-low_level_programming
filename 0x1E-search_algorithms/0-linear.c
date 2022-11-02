#include "search_algos.h"

/**
 * linear_search - searches for a particular
 * value in an array
 * @array: inputed array
 * @size: size of inputred array
 * @value: value being searched for
 * Return: Index and -1 for failure
 */
int linear_search(int *array, size_t size, int value)
{
	int i;

	if (array == NULL)
		return (-1);

	for (i = 0; i < (int)size; i++)
	{
		printf("Value checked array[%u] = [%d]\n", i, array[i]);
		if (value == array[i])
			return (i);
	}
	return (-1);
}
