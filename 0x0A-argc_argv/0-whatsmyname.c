#include "main.h"
#include <stdio.h>
/**
 * main - entry point
 * @argc: number of arguments
 * @argv: arguments in string format
 * Return: Always 0
 */
int main(__attribute__((unused))int argc, char *argv[])
{
	char *x;

	x = argv[0];
	printf("%s\n", x);
	return (0);
}
