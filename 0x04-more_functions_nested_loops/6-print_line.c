#include "main.h"
/**
 *print_line - prints a line based on integer entered
 *
 *@n: integer entered
 * Return: 0 if successful
 */
void print_line(int n)
{
	if (n <= 0)
	{
		_putchar('\n');
	}
	else
		for (n = n; n > 0; n--)
		{
			_putchar('_');
			if (n == 1)
			{
				_putchar('\n');
			}
		}
}
