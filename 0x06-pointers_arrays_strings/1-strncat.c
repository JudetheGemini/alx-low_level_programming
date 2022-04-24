#include "main.h"
#include <string.h>
/**
 *_strncat - concatenate two strings based
 *on the number of specified.
 *@dest: destination string
 *@src: source string
 *@n: number of characters to add
 * Return: a concatenated string
 */
char *_strncat(char *dest, char *src, int n)
{
	strncat(dest, src, n);
	return (dest);
}
