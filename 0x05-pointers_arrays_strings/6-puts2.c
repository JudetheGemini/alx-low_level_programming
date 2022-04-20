#include "main.h"
#include <string.h>
/**
 *puts2 - prints every other character
 *
 *@str: string
 *
 */
void puts2(char *str)
{
	int s, k;

	s = strlen(str);

	for (k = 0; k < s; k++)
	{
		if (k % 2 == 0)
		{
			_putchar(str[k]);
		}
	}
	_putchar('\n');
}
