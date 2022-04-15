#include "main.h"
/**
 * print_triangle - prints a triangle of height size
 * @size: height of triangle
 * Return: void
 */
void print_triangle(int size)
{
	int steps, blocks, spaces;

	if (size <= 0)
	{
		_putchar('\n');
	}
	else
		for (steps = 0; steps < size; steps++)
		{
			for (spaces = (size - steps - 1); spaces > 0; spaces--)
			{
				_putchar(' ');
			}
		for (blocks = 0; blocks <= steps; blocks++)
		{
			_putchar(35);
		}
		_putchar('\n');
	}
}
