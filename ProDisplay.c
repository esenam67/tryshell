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
char *ThePro = "KhaSi$ ", *Entry = NULL;
size_t TheSize = 0;
ssize_t CheckRtr;
/* declaring void variables so that no error of a var non used*/
 (void)ac; (void)argv;
/* need of infinite loop so that the $ shows again and again
 * unless we exit */

while (1)
{

/* Printing a prompt */
write(STDOUT_FILENO, ThePro, 7);
/* print and read what is typed in */

 CheckRtr = getline(&Entry, &TheSize, stdin);
 /* check if failed or reached EOF or user use CTRL + D */
 if (CheckRtr == -1)
 {
printf("Exiting shell....\n"); 
 return -1;
 }
/* print out not gonna use it for now*/
 write(STDOUT_FILENO, Entry, sizeof(Entry));

/* freeing the allocated memo not created by us */
free(Entry);

}

return (0);
}
