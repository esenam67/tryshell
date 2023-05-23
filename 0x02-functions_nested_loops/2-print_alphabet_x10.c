#include "main.h"

/**
 * print_alphabet_x10 - prints 10 times the alphabet
 *
 * Description: a function that prints 10 times the alphabet,
 * in lowercase, followed by a new line.
 *
 * Return: void
 */
void print_alphabet_x10(void)
{
int eachLine;
char alphabet;
for (eachLine = 0; eachLine <= 9; eachLine++)
{
for (alphabet = 'a'; alphabet <= 'z'; alphabet++)
_putchar(alphabet);
_putchar('\n');
}
}
