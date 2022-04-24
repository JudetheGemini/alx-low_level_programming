#include "main.h"
#include <string.h>
/**
 *_strncpy - copy a string
 *@dest: destination string
 *@src: source string
 *@n: number of characters to copy
 * Return: pointer to destination string
 */
char *_strncpy(char *dest, char *src, int n)
{
	strncpy(dest, src, n);
	return (dest);
}
