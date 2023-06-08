#include "main.h"
int prime_r(int n, int y);
/**
 * is_prime_number - check function
 * @n: integer
 * Description: a function that returns 1 if the input integer is
 * a prime number, otherwise return 0.
 * Return: 1 or 0
 */

int is_prime_number(int n)
{
if (n <= 1)
return (0);
return (prime_r(n, n - 1));
}

/**
 * prime_r - check code
 * @n: int to evaluate
 * @y: int
 * Return: 1 or 0
 */

int prime_r(int n, int y)
{
if (y == 1)
return (1);
if (n % y == 0 && y > 0)
return (0);
return (prime_r(n, y - 1));
}
