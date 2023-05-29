#include "main.h"

/**
 *  _strlen- check function
 * @s: pointer to a char
 * Description:  a function that returns the length of a string.
 *
 * Return: length
 */

int _strlen(char *s)
{
int length = 0;
while (*s != '\0')
{
length++;
s++;
}
return (length);
}
