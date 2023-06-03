#include "main.h"

/**
 *  *_strcat- check function
 * @dest: pointer to a char
 * @src: pointer to a char
 * Description:  a function that concatenates two strings
 *
 * Return: dest
 */

char *_strcat(char *dest, char *src)
{
int x = 0, y;
while (dest[x] != '\0')
x++;

for (y = 0; src[y] != '\0'; y++)
{
dest[x] = src[y];
x++;
}
return (dest);
}
