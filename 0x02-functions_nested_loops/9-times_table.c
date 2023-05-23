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

_putchar(r + '0');
_putchar(',');
_putchar(' ');
_putchar('\n');

}
}
}
