#include <stdio.h>

/**
 * main - main function
 *
 * Description: a program that prints all possible combinations
 * of single-digit numbers.
 *
 * Return: 0
 */
int main(void)
{
int sdigit;
for (sdigit = 0; sdigit < 10; sdigit++)
{

putchar(sdigit + '0');
if (sdigit != 9)
{
putchar(',');
putchar(' ');
}
}
putchar('\n');
return (0);
}
