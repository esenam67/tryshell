#include "main.h"

/**
 * _strlen_recursion -  check function
 * @s: pointer to a char
 * Description: a function that returns the length of a string.
 *
 * Return: the length of a string
 */

int _strlen_recursion(char *s)
{
int length = 0;
if (*s)
{
length++;
length += _strlen_recursion(s + 1);
}
return (length);
}
