#include "main.h"
/**
 *swap_int - swap the values of two integers
 *@a: - first pointer
 *@b: - second pointer
 *
 *
 */
void swap_int(int *a, int *b)
{
	int t;

	t = *a;
	*a = *b;
	*b = t;
}
