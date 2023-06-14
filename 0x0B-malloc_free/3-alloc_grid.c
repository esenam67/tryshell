#include "main.h"
#include <stdlib.h>

/**
 * alloc_grid - check function
 *
 * @width: width input
 * @height: height input
 * Description:  a function that returns a pointer to a 2
 * dimensional array of integers.
 *
 * Return: lax
 */

int **alloc_grid(int width, int height)
{
int **lax;
int x, y;
if (width <= 0 || height <= 0)
return (NULL);
lax = malloc(sizeof(int *) * height);
if (lax == NULL)
return (NULL);
for (x = 0; x < height; x++)
{
lax[x] = malloc(sizeof(int) * width);
if (lax[x] == NULL)
{
for (; x >= 0; x--)
free(lax[x]);
free(lax);
return (NULL);
}
}
for (x = 0; x < height; x++)
{
for (y = 0; y < width; y++)
lax[x][y] = 0;
}
return (lax);
}
