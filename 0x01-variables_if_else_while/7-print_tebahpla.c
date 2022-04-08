#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: 0 (Success)
 *
 */
int main(void)
{
int backwards;

for (backwards = 122; backwards >= 97; backwards--)
{
putchar(backwards);
}
putchar('\n');
return (0);
}
