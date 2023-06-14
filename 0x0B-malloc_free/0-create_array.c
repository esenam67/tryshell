#include "main.h"
#include <stdlib.h>

/**
 * create_array - check function
 * @size: size of array
 * @c: char
 * Description: a function that creates an array of chars,
 * and initializes it with a specific char.
 *
 * Return: pt
 */

char *create_array(unsigned int size, char c)
{
char *pt;
unsigned int x;
pt = malloc(sizeof(char) * size);
if (size == 0 || pt == NULL)
return (NULL);
for (x = 0; x < size; x++)
pt[x] = c;
return (pt);
}
