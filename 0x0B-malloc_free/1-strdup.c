#include "main.h"
#include <stdlib.h>

/**
 * _strdup - check function
 *
 * @str: pinter to char
 * Description: a function that returns a pointer to a newly
 * allocated space in memory, which contains a copy of the
 * string given as a parameter.
 *
 * Return: Apointer to new string or NULL if it str is NULL
 */
char *_strdup(char *str)
{
char *Nstr, *kink;
int x = 0, y = 0;
if (str == NULL)
return (NULL);
kink = str;
while (*str)
{
y++;
str++;
}
str = kink;
Nstr = malloc(sizeof(char) * (y + 1));
kink = Nstr;
if (Nstr != NULL)
{
for (; x < y; x++)
{
Nstr[x] = *str;
str++;
}
Nstr[x] = '\0';
return (kink);
}
else
return (NULL);
}
