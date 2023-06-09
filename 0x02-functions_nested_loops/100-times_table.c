#include "main.h"

/**
 * print_times_table - prints the n times table
 * @n: int
 * Description: a function that prints the n times table,
 * starting with 0.
 *
 * Return: n times table
 */

void print_times_table(int n)
{
int x, z;
if (n > 15 || n < 0)
{
continue;
}
else
{
for (x = 0; x <= n; x++)
{
z = x * n;
if ((z / 10) == 0)
{
if (x != 0)
_putchar(' ');
_putchar(z + '0');
if (x == n)
continue;

_putchar(',');
_putchar(' ');
}
else
{
_putchar((z / 10) + '0');
_putchar((z % 10) + '0');
if (x == n)
continue;
_putchar(',');
_putchar(' ');
}
}
_putchar('\n');
}
