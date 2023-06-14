#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - check the code for ALX School students.
 *
 * Return: Always 0.
 */
int main(int ac, char *av[])
{
char *c;
c = argstostr(ac, av);
if (c == NULL)
{
return (1);
}
printf("%s", c);
free(c);
return (0);
}
