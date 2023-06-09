#include "main.h"

/**
* _memset - check the code
* @s: a pointer
* @b: char
* @n: unsigned int
* Return: pointer to the filled memory
*/

char *_memset(char *s, char b, unsigned int n)
{
char *ptr = s;
while (n--)
{
*s = b;
s++;
}
return (ptr);
}
