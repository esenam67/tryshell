#include <stdio.h>

/**
 * main - main function
 *
 * Description: a program that prints the lowercase alphabet
 * in reverse, followed by a new line.
 *
 * Return: 0
 */
int main(void)
{
char revalph;
for (revalph = 'z'; revalph >= 'a'; revalph--)
putchar(revalph);
putchar('\n');
return (0);
}
