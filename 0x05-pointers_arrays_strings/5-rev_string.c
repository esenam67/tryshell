#include "main.h"

/**
 *  rev_string- check function
 * @s: pointer to a char
 * Description: a function that reverses a string.
 *
 * Return: nothing
 */

void rev_string(char *s)
{
int x = 0, y = 0;
char c;
while (s[x] != '\0')
x++;
while (y < x--)
{
c = s[y];
s[y++] = s [x];
s[x] = c;
}
}
