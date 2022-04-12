#include "main.h"
/**
 * main - print a series of characters to stdout
 *
 * Return: 0 if successful
 *{ '_', 'p', 'u', 't', 'c', 'h', 'a', 'r'};
 * Can work with the actual strings or the ASCII values of each character.
 */
int main(void)
{
char a[] = {95, 112, 117, 116, 99, 104, 97, 114};
int arr;

for (arr = 0; arr < 8; arr++)
{
_putchar(a[arr]);
}
_putchar('\n');
return (0);
}
