#include "main.h"
/**
 *print_square - print squares according to argument
 * @size: size of square
 *
 * Return: 0
 */
void print_square(int size)
{
	int x, y;

	for (y = 0; y < size; y++)
	{
		for (x = 0; x < size; x++)
		{
			_putchar(35);
		}
		_putchar('\n');
	}
}
