#include "main.h"

/**
 * *cap_string - check func
 * @str: pointer to char
 * Description: a function that capitalizes all words of a string.
 *
 * Return: str
 */

char *cap_string(char *str)
{
int i;
for (i = 0; str[i] != '\0'; i++)
{
if (i == 0)
{
if ((str[i] >= 'a' && str[i] <= 'z'))
str[i] -= 32;
continue;
}
if (str[i] == ' ')
{
++i;
if (str[i] >= 'a' && str[i] <= 'z')
{
str[i] -= 32;
}
}
else
{
if (str[i] >= 'A' && str[i] <= 'Z')
str[i] += 32;
}
}
return (str);
}
