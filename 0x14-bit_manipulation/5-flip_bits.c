#include "main.h"

/**
 * flip_bits - check f
 * @n: first number
 * @m: second number
 * Description: a function that returns the number of bits you would
 * need to flip to get from one number to another.
 *
 * Return: number of bits to change c
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
int i, c = 0;
unsigned long int y;
unsigned long int z = n ^ m;
for (i = 63; i >= 0; i--)
{
y = z >> i;
if (y & 1)
c++;
}
return (c);
}
