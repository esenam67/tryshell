#include "shellsh.h"

/**
 * main - check function
 * @ac: int
 * @argv: pointer to pointer
 * Description: Printing a prompt
 * Return: 0
 */

int main(int ac, char **argv)
{
char *ThePro = "(KhaSi) $", *Entry;
size_t TheSize = 0;
/* Printing a prompt */
write(STDOUT_FILENO, ThePro, 10);
/* print and read what is typed in */

getline(&Entry, &TheSize, stdin);
/* print out */
 printf("%s\n", Entry);
/*write(STDOUT_FILENO, Entry, size_t TheSize);*/

/* declaring void variables */
  (void)ac; (void)argv;

free(Entry);
return (0);
}
