#include "main.h"
#include <stdlib.h>
/**
 * _strdup - returns a pointer to newly allocated space
 * @str: string parameter
 * Return: pointer to new memory
 *
 */
char *_strdup(char *str)
{
	char *myStr;
	unsigned int i, j;

	if (str == NULL)
	{
		return (NULL);
	}
	for (i = 0; str[i] != '\0'; i++)
	{
		myStr = (char *)malloc(sizeof(char) * (i + 1));
	}
	if (myStr == NULL)
	{
		return (NULL);
	}
	for (j = 0; j <= i; j++)
	{
		myStr[j] = str[j];
	}
	return (myStr);
	free(myStr);
}

