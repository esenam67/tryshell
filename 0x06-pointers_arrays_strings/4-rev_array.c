#include "main.h"

/**
* reverse_array - check code
* @a: pointer to an int
* @n:  The number of characters
* Description:  a function that reverses the content of an array
* of integers.
*
* Return: nothing
*/

void reverse_array(int *a, int n)
{
int x = 0;
int y;
while (x < n--)
{
y = a[x];
a[x++] = a[n];
a[n] = y;
}
}
