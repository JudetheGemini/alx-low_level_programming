#include "main.h"
/**
 *_isalpha - checks for alphabetic character
 *
 * Return: 1 if its a letter, 0 otherwise.
 *@c: Character/ASCII value
 */
int _isalpha(int c)
{
	if ((c > 64  && c < 91) ||
	    (c > 96 && c < 123))
	{
		return (1);
	}
	else
		return (0);
}
