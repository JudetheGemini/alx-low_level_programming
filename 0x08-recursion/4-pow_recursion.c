#include "main.h"
/**
 *_pow_recursion - returns a value of x raised to y
 *@x: number
 *@y: power
 * Return: calculated value
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}
	if (y == 0)
	{
		return (1);
	}
	else
		return (x * _pow_recursion(x, y - 1));
}
