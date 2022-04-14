#include "main.h"
/**
 *_isdigit - check for digit
 *
 *@c: integer
 * Return: 1 if digit, otherwise 0
 */
int _isdigit(int c)
{
	if (c > 47 && c < 58)
	{
		return (1);
	}
	else
		return (0);
}
