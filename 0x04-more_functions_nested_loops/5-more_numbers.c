#include "main.h"
/**
 *more_numbers - print 0 to 14, 10 times.
 *
 * Return: 0 if successful.
 */
void more_numbers(void)
{
	int num;
	int count;

	for (count = 0; count < 10; count++)
	{
		for (num = 0; num < 15; num++)
		{
			if (num >= 10)
			{
				_putchar((num / 10) +  48);
			}
			_putchar((num % 10) + 48);
		}
		_putchar('\n');
	}
}
