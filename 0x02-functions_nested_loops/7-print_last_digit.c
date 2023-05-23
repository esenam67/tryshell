#include "main.h"

/**
 * print_last_digit - prints the last digit of a number
 * @lastD: int value
 * Description: a function that prints the last digit of a number.
 *
 * Return: last digit of a number
 */

int print_last_digit(int lastD)
{
int lastDresult;
if (lastD < 0)
lastD = -lastD;
lastDresult = lastD % 10;
_putchar((lastDresult % 10) + '0');
return (lastDresult);
_putchar('\n');

}
