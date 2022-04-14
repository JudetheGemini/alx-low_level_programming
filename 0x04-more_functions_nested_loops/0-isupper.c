#include <stdio.h>
/**
 *_isupper - Check if C is uppercase character.
 *
 *"
 *@c: integer
 * Return: 1 if uppercase, 0 otherwise.
 */
int _isupper(int c)
{
	if (c > 64 && c < 91)
	{
		return (1);
	}
	else
		return (0);
}
