#include "main.h"
#include <string.h>
/**
 *_puts - prints string to stdout
 *@str: string
 *
 */
void _puts(char *str)
{
	int n;
	int length;

	length = strlen(str);
	for (n = 0; n < length; n++)
	{
		_putchar(str[n]);
	}
	_putchar('\n');
}
