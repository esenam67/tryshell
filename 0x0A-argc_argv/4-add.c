#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
/**
 * main - a program that adds positive numbers
 * @argc: number of parameter
 * @argv: the parametres
 * Return: 0
 */

int main(int argc, char *argv[])
{

	int x, y = 0, i;

	while (argc-- > 1)
	{
		for (i = 0; argv[argc][i]; i++)
		{
			if (!(isdigit(argv[argc][i])))
			{
				printf("Error\n");
				return (1);
			}
		}
		x = atoi(argv[argc]);
		y += x;
	}
	printf("%d\n", y);
	return (0);
}
