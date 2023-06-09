#include "main.h"

/**
* _memcpy - check code
* @dest: pointer
* @src: pointer
* @n: unsigned int
* Return: ptr
*/

char *_memcpy(char *dest, char *src, unsigned int n)
{
char *ptr = dest;
while (n--)
{
*dest = *src;
src++;
dest++;
}
return (ptr);
}
