#include "main.h"
int the_sqrt(int n, int x);
/**
 * _sqrt_recursion - check function
 * @n: int
 * Description: the number to return the natural square of
 *
 * Return: sqrt
 */

int _sqrt_recursion(int n)
{
if (n < 0)
return (-1);
return (the_sqrt(n, 0));
}
/**
 * the_sqrt - find square root
 * @n: previous value
 * @x: square root value
 *
 * Return: the square root
 */
int the_sqrt(int n, int x)
{
if (x * x > n)
return (-1);
if (x * x == n)
return (x);
return (the_sqrt(n, x + 1));
}
