#include "main.h"

/**
 * print_rev - check function
 * @s: pointer to a char
 * Description: a function that prints a string, in reverse,
 * followed by a new line.
 *
 * Return: nothing
 */

void print_rev(char *s)
{
int x = 0;
while (s[x] != '\0')
x++;
while (x)
_putchar (s[--x]);
_putchar ('\n');
}
