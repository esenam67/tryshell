#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * add_node - check functon
 * @head: double pointer to the list_t list
 * @str: new string to add in the node
 * Description: a function that adds a new node at the beginning
 * of a list_t list.
 *
 * Return: the address of the new element, or NULL if it fails
 */
list_t *add_node(list_t **head, const char *str)
{
list_t *addno;
unsigned int len = 0;
while (str[len])
len++;
addno = malloc(sizeof(list_t));
if (!addno)
return (NULL);
addno->str = strdup(str);
addno->len = len;
addno->next = (*head);
(*head) = addno;
return (*head);
}

