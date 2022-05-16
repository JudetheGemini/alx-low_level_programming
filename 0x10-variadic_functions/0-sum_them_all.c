#include <stdarg.h>
#include "variadic_functions.h"
/**
 * sum_them_all - sum all parameters inputted
 * @n: integer to be added
 * Return: sum of arguments
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list ptr;
	int sum;
	unsigned int i;

	sum = 0;
	va_start(ptr, n);

	if (n == 0)
	{
		return (0);
	}
	else
	for (i = 0; i < n; i++)
	{
		sum += va_arg(ptr, int);
	}
	return (sum);
}
