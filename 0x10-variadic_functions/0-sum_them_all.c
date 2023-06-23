#include "variadic_functions.h"
#include <stdarg.h>

/**
 * sum_them_all - check function
 * @n: arguments
 * Description: a function that returns the sum of all its
 * parameters.
 *
 * Return: the sum
 */

int sum_them_all(const unsigned int n, ...)
{
va_list l;
unsigned int i;
int sum = 0;

if (n == 0)
	return (0);

va_start(l, n);
for (i = 0; i < n; i++)
	sum += va_arg(l, int);
va_end(l);
return (sum);
}
