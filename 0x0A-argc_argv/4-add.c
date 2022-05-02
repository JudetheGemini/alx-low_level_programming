#include "main.h"
#include <stdlib.h>
#include <ctype.h>
#include <stdio.h>
/**
 *main - Entry point
 * @argc: number of command line arguments
 * @argv: array of command line arguments
 * Return: Always 0
 */
int main(int argc, char *argv[])
{
	int x, sum;

	if (argc < 3)
	{
		printf("0\n");
	}
	else
	{
		for (x = 1; x < argc; x++)
		{
			if (isdigit(*argv[x]) != 0)
			{
				sum += atoi(argv[x]);
			}
			else
			{
				printf("Error\n");
				return (1);
			}
		}
		printf("%d\n", sum);
	}
	return (0);
}
