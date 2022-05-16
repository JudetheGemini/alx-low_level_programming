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
	unsigned int i;
	int sum = 0;

	if (n == 0)
		return (0);

	va_start(ptr, n);
	for (i = 0; i < n; i++)
		sum += va_arg(ptr, int);
	va_end(ptr);
	return (sum);
}
