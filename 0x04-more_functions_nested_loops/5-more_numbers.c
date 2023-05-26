#include "main.h"
/**
 * more_numbers - a function tha prints 10 times the numbers, from 0 to 14
 * _putchar only 3 times
 * Reurn: 0-14 x10 followed by new line
 */
void more_numbers(void)
{
int i, l;
for (l = 0; l < 10; l++)
{
for (i = 0; i <= 14; i++)
{
if (i >= 10)
{
_putchar((i / 10) + '0');
}
_putchar((i % 10) + '0');
}
_putchar('\n');
}
}
