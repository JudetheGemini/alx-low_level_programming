#include <stdio.h>
#include <string.h>
#include "main.h"
/**
 *print_array - prints n number of array elements
 *@a: array name
 *@n: number of elements to print
 */
void print_array(int *a, int n)
{
	int k;

	for (k = 0; k < n; k++)
	{
		printf("%d", a[k]);
		if (k != n - 1)
		{
			printf(", ");
		}
	}
	printf("\n");
}
