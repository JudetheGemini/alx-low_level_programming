#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: 0 (Success)
 */
int main(void)
{
int letters;

for (letters = 97; letters <= 122; letters++)
{

if (letters == 101 || letters == 113)
{
continue;
}
putchar(letters);
}
putchar('\n');
return (0);
}
