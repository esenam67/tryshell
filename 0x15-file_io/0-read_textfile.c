#include "main.h"
#include <stdlib.h>

/**
 * read_textfile - reads a text file and prints it to the POSIX
 * standard output
 * @filename: read test file
 * @letters: nmber of letters to read
 * Return: x or return 0 if the file can not be opened or read or
 * NULL
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
char *fp;
ssize_t fd;
ssize_t x;
ssize_t y;
fd = open(filename, O_RDONLY);
if (fd == -1)
return (0);
fp = malloc(sizeof(char) * letters);
y = read(fd, fp, letters);
x = write(STDOUT_FILENO, fp, y);
free(fp);
close(fd);
return (x);
}
