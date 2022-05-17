#include "variadic_functions.h"
/**
 * print_all - print all arguments entered
 * @format: list of arguments passed to function
 * Return: nothing
 *
 */
void print_all(const char * const format, ...)
{
	va_list ptr;
	unsigned int i = 0, j = 0, n;
	char *str;
	const char input[] = "cifs";

	va_start(ptr, format);
	while (format && format[i])
	{
		n = 0;
		while (input[n])
		{
			if (format[i] == input[n] && j)
			{
				printf(", ");
			} n++;
		}
		switch (format[i])
		{
		case 'c':
			printf("%c", va_arg(ptr, int)), j = 1;
			break;
		case 'i':
			printf("%d", va_arg(ptr, int)), j = 1;
			break;
		case 'f':
			printf("%f", va_arg(ptr, double)), j = 1;
			break;
		case 's':
			str = va_arg(ptr, char *), j = 1;
			if (!str)
			{
				printf("(nil)");
				break;
			}
			printf("%s", str);
			break;
		} i++;
	}
	printf("\n"), va_end(ptr);
}
