#include "main.h"

/**
* _strchr - check code
* @s: pointer
* @c: char
* Return: function that locates a character in a string
*/

char *_strchr(char *s, char c)
{
int x;
for (x = 0; s[x] >= '\0'; x++)
{
if (s[x] == c)
return (s + x);
}
return ('\0');
}
