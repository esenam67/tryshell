#include "main.h"

/**
 * _abs - computes the absolute value of an integer
 * @absolute: value
 * Description: a function that computes the absolute value of
 * an integer.
 *
 * Return: absolute value of an integer
 */

int _abs(int absolute)
{
if (absolute < 0)
absolute = -absolute;
return (absolute);
_putchar('\n');
}
