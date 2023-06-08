#include "main.h"

/**
 * _puts_recursion -  check function
 * @s: pointer
 * Description: a function that prints a string,
 * followed by a new line.
 *
 * Return: 0
 */

void _puts_recursion(char *s)
{
if (*s)
{
_putchar(*s);
_puts_recursion(s + 1);
}
else
_putchar('\n');
}
