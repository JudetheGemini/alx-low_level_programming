#include "main.h"
/**
 *_memset - function that appends a byte to the first
 * n digits of a string
 *@s: string to be appended to
 *@b: byte to be appended
 *@n: number of characters to be replaced
 * Return: new string
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int j;

	for (j = 0; j < n; j++)
	{
		*(s + j) = b;
	}
	return (s);
}
