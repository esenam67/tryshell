#include <stdlib.h>
#include "lists.h"

/**
 * free_list - frees a linked list
 * @head: list_t list to be freed
 * Description: a function that frees a list_t list.
 */
void free_list(list_t *head)
{
	list_t *freeli;

	while (head)
	{
		freeli = head->next;
		free(head->str);
		free(head);
		head = freeli;
	}
}

