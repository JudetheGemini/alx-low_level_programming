#include <stdio.h>
/**
 *main - Entry
 *
 *
 * Return: 0 (Success)
 */
int main(void)
{
int charSize = sizeof(char);
int intSize = sizeof(int);
int longSize = sizeof(long);
int doubleSize = sizeof(double);
int floatSize = sizeof(float);

printf("Size of a char: %i byte(s)\n", charSize);
printf("Size of an int: %i byte(s)\n", intSize);
printf("Size of a long int: %i byte(s)\n", longSize);
printf("Size of a long long int: %i byte(s)\n", doubleSize);
printf("Size of a float: %i byte(s)\n", floatSize);
return (0);
}
