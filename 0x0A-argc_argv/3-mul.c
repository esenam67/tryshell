#include <stdio.h>
#include <stdlib.h>

/**
 * main - a program that multiplies two numbers.
 * @argc: number of p
 * @argv: pa
 * Return: 0
 */

int main(int argc, char *argv[])
{
int x, y, res;
if (argc != 3)
{
printf("Error\n");
return (1);
}
else
{
x = atoi(argv[1]);
y = atoi(argv[2]);
res = x *y;
printf("%d\n", res);
return (0);
}
}
