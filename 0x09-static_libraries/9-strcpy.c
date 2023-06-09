#include "main.h"
#include <stdlib.h>

/**
* *_strcpy - check code
* @dest: pointer
* @src: pointer
* Return: dest
*/

char *_strcpy(char *dest, char *src)
{
char *yes = dest;
while (*src)
*dest++ = *src++;
return (yes);
}
