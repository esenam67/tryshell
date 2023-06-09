#include <stdio.h>

/**
 * main - a program that prints its name
 * @argv: argv variable
 * @argc: variable
 * Return: 0
 */

int main(int argc, char *argv[])
{
int x;
for (x = 0; x < argc; x++)
	printf("%s", argv[x]);
printf("\n");
return (0);
}
