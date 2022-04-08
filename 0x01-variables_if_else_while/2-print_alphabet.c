#include <stdio.h>
#include <stdlib.h>
/**
 * main - Entry point
 *
 * Return: 0 (Success)
 */
int main(void)
{
char alphabets;

for (alphabets = 97; alphabets <= 122; alphabets++)
{
putchar(alphabets);
}
putchar('\n');
return (0);
}
