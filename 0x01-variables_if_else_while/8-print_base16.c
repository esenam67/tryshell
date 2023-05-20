#include <stdio.h>

/**
 * main - main function
 *
 * Description: a program that prints all the numbers of base 16
 * in lowercase, followed by a new line.
 *
 * Return: 0
 */
int main(void)
{
int baseS;
char fromatof;
for (baseS = 0; baseS < 10; baseS++)
putchar(baseS + '0');
for (fromatof = 'a'; fromatof <= 'f'; fromatof++)
putchar(fromatof);
putchar('\n');
return (0);
}

