#include "main.h"
/**
 *_memcpy - copy a memory area to a destination array
 *@dest: destination array
 *@src: source array
 *@n: number of bytes to copy
 * Return: pointer to dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int j;

	for (j = 0; j < n; j++)
	{
		*(dest + j) = src[j];
	}
	return (dest);
}
