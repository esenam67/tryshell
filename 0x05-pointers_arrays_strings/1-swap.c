#include "main.h"

/**
 * swap_int - check function
 * @a: pointer to an int
 * @b: pointer to an int
 * Description:  a function that swaps the values of two integers.
 *
 * Return: nothing
 */

void swap_int(int *a, int *b)
{
int c;

c = *a;
*a = *b;
*b = c;
}
