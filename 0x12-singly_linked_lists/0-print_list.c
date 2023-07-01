#include <stdio.h>
#include "lists.h"

/**
 * print_list - check function
 * @h: pointer to the list_t list to print
 * Description: a function that prints all the elements of a
 * list_t list.
 *
 * Return: x
 */
size_t print_list(const list_t *h)
{
size_t x = 0;
while (h)
{
if (!h->str)
printf("[0] (nil)\n");
else
printf("[%u] %s\n", h->len, h->str);
h = h->next;
x++;
}
return (x);
}

