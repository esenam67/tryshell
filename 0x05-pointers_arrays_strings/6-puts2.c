#include "main.h"

/**
* puts2 - check code
* @str: pointer to a char
* Description: a function that prints every other character of a
* string, starting with the first character, followed by a new line.
*
* Return: nothing
*/

void puts2(char *str)
{
int i = 0, fx = 0;

while (str[i] != '\0')
i++;
i -= 1;
for (; fx <= i; fx += 2)
_putchar(str[fx]);
_putchar('\n');
}
