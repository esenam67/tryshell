#include "main.h"
#include <stdio.h>

/**
* print_array - check code
* @a: pointer
* @n: pointer
* Description: a function that prints n elements of an array of
* integers, followed by a new line.
* Return: nothing
*/

void print_array(int *a, int n)
{
int x = 0;
for (; x < n; x++)
{
printf("%d", a[x]);
if (x < n - 1)
printf(", ");
}
putchar('\n');
}
