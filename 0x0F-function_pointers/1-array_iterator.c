#include "function_pointers.h"
/**
 * array_iterator - executes a function given as a parameter
 * on each element
 * @size: size of array
 * @action: pointer to function
 * @array: array
 * Return: nothing
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int n;

	if (array && action)
		for (n = 0; n < size; n++)
			action(array[n]);
}
