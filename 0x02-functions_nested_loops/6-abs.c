#include "main.h"
/**
 *_abs - computes the absolute value of an integer
 *
 *@n: integer (may be positive or negative)
 *
 * Return: absolute value
 */
int _abs(int n)
{
	int abs_val;

	if (n < 0)
	{
		abs_val = n * (-1);
		return (abs_val);
	}
	else if (n == 0)
	{
		return (0);
	}
	else
		return (n);
}
