#include "main.h"
#include <stdlib.h>
/**
 * str_concat - concatenate two strings
 * @s1: first string to concatenate
 * @s2: second string to concatenate
 * Return: pointer to space for concatenated string
 */
char *str_concat(char *s1, char *s2)
{
	char *newString;
	unsigned int i, j, k, l;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	for (i = 0; s1[i] != '\0'; i++)
		;

	for (j = 0; s2[j] != '\0'; j++)
		;

	newString = malloc(sizeof(char) * (i + j + 1));

	if (newString == NULL)
	{
		return (NULL);
	}

	if (newString == NULL)
	{
		free(newString);
		return (NULL);
	}

	for (k = 0; k < i; k++)
		newString[k] = s1[k];

	l = j;
	for (j = 0; j <= l; k++, j++)
		newString[k] = s2[j];

	return (newString);
}
