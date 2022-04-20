#include "main.h"
#include <string.h>
/**
 *print_rev - print string in reverse
 *@s: string
 *
 */
void print_rev(char *s)
{
	int j;
	int length;

	length = strlen(s);

	for (j = length - 1; j >= 0; j--)
	{
		_putchar(s[j]);
	}
	_putchar('\n');
}
