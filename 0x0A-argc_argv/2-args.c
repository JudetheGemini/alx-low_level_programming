#include "main.h"
#include <stdio.h>
/**
 * main - Entry Point
 * @argc: Number of command line arguments
 * @argv: command line arguments in string format
 * Return: Always 0
 */
int main(int argc, char *argv[])
{
	int x;

	for (x = 0; x < argc; x++)
	{
		printf("%s", argv[x]);
		printf("\n");
	}
	return (0);
}
