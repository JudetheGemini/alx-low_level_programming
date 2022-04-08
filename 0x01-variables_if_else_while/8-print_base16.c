#include <stdio.h>
/**
 * main - Entry point
 *
 *
 * Return: 0 (Success)
 */
int main(void)
{
int hexDigits;
int hexLetters;

for (hexDigits = 0x30; hexDigits <= 0x39; hexDigits++)
{
putchar(hexDigits);
}
for (hexLetters = 0x61; hexLetters <= 0x66; hexLetters++)
{
putchar(hexLetters);
}
putchar('\n');
return (0);
}
