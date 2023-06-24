#include "main.h"

/**
* *_strncpy - check code
* @dest: pointer to char
* @src: pointer to char
* @n: int
* Description: a function that concatenates two strings.
*
* Return: nothing
*/

char *_strncpy(char *dest, char *src, int n)
{
int i = 0;
while (i < n && src[i] != '\0')
{
dest[i] = src[i];
i++;
}
return (dest);
}
