#include "main.h"

/**
 * *_strncat - check function
 * @dest: pointer to a char
 * @src:  pointer to a char
 * @n: integer
 * Description: a function that concatenates two strings.
 *
 * Return: dest
 */

char *_strncat(char *dest, char *src, int n)
{

int x = 0, y;
while (dest[x] != '\0')
x++;

while (y < n && src[y] != '\0')
{
dest[x] = src[y];
x++;
y++;
}
dest[x] = '\0';
return (dest);
}
