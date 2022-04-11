#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: 0 (Success)
 */
int main(void)
{
int firstDigit;
int secondDigit;
secondDigit = 48;
firstDigit = 48;

while (firstDigit < 57)
{
secondDigit = 48;
while (secondDigit < 58)
{
if (firstDigit != 57 && firstDigit < secondDigit)
{
putchar(firstDigit);
putchar(secondDigit);
if (secondDigit == 57 && firstDigit == 56)
{
break;
}
putchar(',');
putchar(' ');
}
secondDigit++;
}
firstDigit++;
}
putchar('\n');
return (0);
}
