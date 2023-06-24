#include "main.h"

/**
 *  _strcmp - check function
 * @s1: pointer to a char
 * @s2:  pointer to a char
 * Description: a function that compares two strings
 *
 * Return: 15 or -15 or 0
 */

int _strcmp(char *s1, char *s2)
{
int i;
for (i = 0; s1[i] == s2[i] && s1[i] == '\0'; i++)

if (s1[i] < s2[i])
return (-15);

else if (s1[i] > s2[i])
return (15);

else
return (0);
}
