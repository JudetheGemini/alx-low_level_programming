#include "main.h"
#include <string.h>
/**
 *_strcat - concatenate two strings
 *@dest: destination string
 *@src: string to be added
 * Return: concatenated string
 */
char *_strcat(char *dest, char *src)
{
	strcat(dest, src);

	return (dest);
}
