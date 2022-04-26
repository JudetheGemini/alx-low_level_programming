#include "main.h"
/**
 *_strchr - looks for a string in an array
 *@s: array to be searched
 *@c: character being searched for
 * Return: pointer to character in string or NULL if not found
 */
char *_strchr(char *s, char c)
{
	unsigned int j;

	for (j = 0; s[j] != '\0'; j++)
		if (*(s + j) == c)
			return ((s + j));
		if (*(s + j) == c)
			return (s + j);
	return ('\0');
}
