#include "main.h"
#include <stdlib.h>

/**
 * str_concat - A function that concatenates two strings
 * @s1: pointer to char
 * @s2: pointer to char
 * Return: pointer
 */
char *str_concat(char *s1, char *s2)
{
char *str, *st1, *st2;
int i = 0, lens1 = 0, lens2 = 0;
st1 = s1;
st2 = s2;
if (s1 == NULL)
s1 = "";
while (*s1)
{
lens1++;
s1++;
}
s1 = st1;
if (s2 == NULL)
s2 = "";
while (*s2)
{
lens2++;
s2++;
}
s2 = st2;
str = malloc(sizeof(char) * (lens1 + lens2 + 1));
st1 = str;
if (str == NULL)
return (NULL);
for (; i < (lens1 + lens2); i++)
{
if (i < lens1)
{
str[i] = *s1;
s1++;
}
else
{
str[i] = *s2;
s2++;
}
}
str[i] = '\0';
return (st1);
}
