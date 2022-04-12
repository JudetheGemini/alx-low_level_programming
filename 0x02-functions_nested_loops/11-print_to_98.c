#include "main.h"
#include <stdio.h>
/**
 *print_to_98 - countdown or
 *              countup to 98
 *@n: number to begin counting from
 * Return: void
 */
void print_to_98(int n)
{
	if (n < 98)
	{
		for (n = n; n <= 98; n++)
		{
			printf("%d", n);
			if (n != 98)
			{
				printf(", ");
			}
		}
		printf("\n");
	}
	else if (n > 98)
	{
		for (n = n; n >= 98; n--)
		{
			printf("%d", n);
			if (n != 98)
			{
				printf(", ");
			}
		}
		printf("\n");
	}
	else
	{
		printf("%d", n);
		printf("\n");
	}
}
