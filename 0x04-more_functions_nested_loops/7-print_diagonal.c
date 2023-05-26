#include "main.h"
/**
 * print_diagonal - a function that draws a diagonal line on the terminal
 * @n: input number of times *\* should be printed
 * Return: a diagonal
 */
void print_diagonal(int n)
{
int co, so;
if (n <= 0)
{
_putchar('\n');
}
else
{
for (co = 1; co <= n; co++)
{
for (so = 1; so < co; so++)
{
_putchar(' ');
}
_putchar('\\');
_putchar('\n');
}
}
}
