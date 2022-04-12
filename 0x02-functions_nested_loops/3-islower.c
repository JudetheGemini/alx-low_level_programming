#include "main.h"
/**
 *_islower - checks for lowercase character
 *
 * @c: is an character with ASCII value
 * Return: 0 if false, 1 if true
 */
int _islower(int c)
{
	int result;

	if (c < 97 || c > 122)
	{
		result = 0;
	}
	else
	{
		result = 1;
	}
	return (result);
}
