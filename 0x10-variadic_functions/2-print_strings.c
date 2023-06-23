#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * print_strings - a function that prints strings, followed by a new line
 * @separator: separator
 * @n: numbers of arg
 * Return:
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
va_list l;
char *pt;
unsigned int i;

va_start(l, n);

for (i = 0; i < n; i++)
{
pt = va_arg(l, char*);
if (pt == NULL)
printf("(nil)");
else
printf("%s", pt);
if (i != (n - 1) && separator != NULL)

printf("%s", separator);
}
printf("\n");
va_end(l);
}
