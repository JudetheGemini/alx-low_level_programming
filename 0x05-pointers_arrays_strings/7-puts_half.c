#include "main.h"
#include <string.h>
/**
 *puts_half - prints half of a string
 *@str: string
 *
 */
void puts_half(char *str)
{
	int s, k;

	s = strlen(str);
	for (k = (s / 2); k < s; k++)
	{
		_putchar(str[k]);
	}
	_putchar('\n');
}
