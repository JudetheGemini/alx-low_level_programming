#include "main.h"
/**
 * main - Entry point
 *
 * Return: always 0
 *
 */
int main(void)
{
print_alphabet();
_putchar('\n');
return (0);
}
/**
 * print_alphabet - prints lowercase alphabets
 *
 */
void print_alphabet(void)
{
int alphabets;
for (alphabets = 97; alphabets < 123; alphabets++)
{
_putchar(alphabets);
}
}
