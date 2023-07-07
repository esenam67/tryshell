#include "main.h"

/**
 * print_binary - check f
 * @n: number to print in binary
 * Description: a function that prints the binary representation
 * of a number.
 *
 * Return: nothing
 */
void print_binary(unsigned long int n)
{
int i, j = 0;
unsigned long int l;
for (i = 63; i >= 0; i--)
{
l = n >> i;
if (l & 1)
{
_putchar('1');
j++;
}
else if (j)
_putchar('0');
}
if (!j)
_putchar('0');
}
