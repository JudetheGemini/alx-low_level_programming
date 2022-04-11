#include <stdio.h>
/**
 * main - Print three different numbers
 *
 *
 * Return: 0 (Success)
 *
 * i = First digit
 * j = Second digit
 * k = Third digit
 */
int main(void)
{
int i, j, k;
i = 48;
j = 48;
k = 48;

while (i < 58)
{
j = 48;
while (j < 58)
{
k = 48;
while (k < 58)
{
if (i < j && j < k && i != j && j != k)
{
putchar(i);
putchar(j);
putchar(k);
if (k == 57 && i == 55)
{
break;
}
putchar(',');
putchar(' ');
}
k++;
}
j++;
}
i++;
}
putchar('\n');
return (0);
}
