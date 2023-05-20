#include <stdio.h>

/**
 * main - main function
 *
 * Description: a program that prints all possible different
 * combinations of two digits.
 *
 * Return: 0
 */
int main(void)
{
int firstD, secondD;
for (firstD = 0; firstD < 9; firstD++)
{
for (secondD = firstD + 1; secondD < 10; secondD++)
{
putchar((firstD % 10) + '0');
putchar((secondD % 10) + '0');
if (firstD != 8 && secondD != 9)
putchar (',');
putchar (' ');
}
}
putchar('\n');
return (0);
}

