#include "main.h"
#include "stddef.h"
#include "stdlib.h"
/**
 * create_array - creates an array of chars
 * @size: size of space needed
 * @c: initializer
 * Return: initialized char
 */
char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *str;

	str = malloc(sizeof(c) * size);

	if (size == 0)
	{
		return (NULL);
	}
	else
	{
		for (i = 0; i < size; i++)
		{
			str[i] = c;
		}
	}
	return (str);
}
