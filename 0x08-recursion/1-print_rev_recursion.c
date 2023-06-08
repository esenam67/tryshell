#include "main.h"

/**
 * _print_rev_recursion - check function
 * @s: pointer to a char
 * Description: a function that prints a string in reverse.
 *
 * Return: 0
 */

void _print_rev_recursion(char *s)
{
if (*s)
{
_print_rev_recursion(s + 1);
_putchar(*s);
}
}
