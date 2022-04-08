#include <stdio.h>
/**
 * main - Entry Point
 *
 * Return: 0 (Success)
 */
int main(void)
{
int smallLetters;
int capitalLetters;

for (smallLetters = 97; smallLetters <= 122; smallLetters++)
{
putchar(smallLetters);
}
for (capitalLetters = 65; capitalLetters <= 90; capitalLetters++)
{
putchar(capitalLetters);
}
putchar('\n');

return (0);
}
