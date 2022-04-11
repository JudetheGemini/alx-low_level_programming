#include <stdio.h>
/**
 * main - Print three different numbers
 *
 * Return: 0 (Success)
 */
int main(void)
{
int firstDigit, secondDigit, thirdDigit;
firstDigit = 48;
secondDigit = 48;
thirdDigit = 48;

while (firstDigit < 58)
{
secondDigit = 48;
while (secondDigit < 58)
{
thirdDigit = 48;
while (thirdDigit < 58)
{
if (firstDigit < secondDigit && secondDigit < thirdDigit && firstDigit != secondDigit && secondDigit != thirdDigit)
{
putchar(firstDigit);
putchar(secondDigit);
putchar(thirdDigit);
if (thirdDigit == 57 && firstDigit == 55)
{
break;
}
putchar(',');
putchar(' ');
}
thirdDigit++;
}
secondDigit++;
}
firstDigit++;
}
putchar('\n');
return (0);
}
