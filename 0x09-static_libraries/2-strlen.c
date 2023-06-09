#include "main.h"

/**
* _strlen - check code
* @s: pointer
* Return: x
*/

int _strlen(char *s)
{
int x = 0;
while (s[x] != '\0')
x++;
return (x);
}
