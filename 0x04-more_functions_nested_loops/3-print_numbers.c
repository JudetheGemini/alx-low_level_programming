#include "main.h"
/**
 *print_numbers - prints 0 to 9
 *
 * Return: 0 if success
 *
 */
void print_numbers(void)
{
	int c;

	for (c = 48; c < 58; c++)
	{
		_putchar(c);
	}
	_putchar('\n');
}
