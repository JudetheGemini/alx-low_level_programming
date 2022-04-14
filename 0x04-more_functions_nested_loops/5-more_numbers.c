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
	int innerCount;

	for (count = 0; count < 10; count++)
	{
		for (num = 48; num < 58; num++)
		{
			_putchar(num);
			if (num == 57)
			{
				for (innerCount = 48; innerCount < 53; innerCount++)
				{
					_putchar(49);
					_putchar(innerCount);
				}
			}
		}
		_putchar('\n');
	 }
}
