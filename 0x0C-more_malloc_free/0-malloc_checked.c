#include "main.h"
#include <stdlib.h>
/**
 * malloc_checked - function that allocates memory using malloc
 * @b: memory size
 * Return: Always 0
 *
 */
void *malloc_checked(unsigned int b)
{
	int *space;

	space = malloc(b);

	if (space == NULL)
		exit(98);
	return (space);
}
