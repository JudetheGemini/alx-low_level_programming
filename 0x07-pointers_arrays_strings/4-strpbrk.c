#include "main.h"
/**
 *_strpbrk - function that searches a string for the
 * occurence of another string.
 *@s:string to be searched
 *@accept: string to be identified
 * Return: first occurence of string
 */
char *_strpbrk(char *s, char *accept)
{
	int i, j;

	for (i = 0; *(s + i) != '\0'; i++)
	{
		for (j = 0; *(accept + j) != '\0'; j++)
		{
			if (*(s + i) == *(accept + j))
			{
				return ((s + i));
			}
		}
	}
	return ('\0');
}
