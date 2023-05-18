#include <unistd.h>

/**
 * main - entry point
 *
 * Return: always 1
 */
int main(void)
{
int x;
char text[] = "and that piece of art is useful\" - Dora Korpar, 2015-10-19";
write(x, &text, strlen(text));
return (1);
}
