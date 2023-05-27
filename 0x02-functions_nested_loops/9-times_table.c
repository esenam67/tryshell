#include "main.h"

/**
 * times_table - prints the 9 times table
 *
 * Description: a function that prints the 9 times table,
 * starting with 0.
 *
 * Return: a function that prints the 9 times table
 */

void times_table(void)
{
int  x, y, r;
for (x = 0; x <= 9; x++)
{
for (y = 0; y <= 9; y++)
{

r = x * y;
if ((r / 10) == 0)
{
if (y != 0)
_putchar(' ');
_putchar(r + '0');
if (y == 9)
continue;
_putchar(',');
_putchar(' ');
}
else
{
_putchar((r / 10) + '0');
_putchar((r % 10) + '0');
if (y == 9)
continue;
_putchar(',');
_putchar(' ');
}
}
_putchar('\n');
}
}
