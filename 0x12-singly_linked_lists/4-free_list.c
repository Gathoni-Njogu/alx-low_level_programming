#include <stdlib.h>
#include "lists.h"

/**
 * free_list - fxn that frees list_t list
 * @head: head of the linked list list_t
 *
 * Retur: no return
 */

void free_list(list_t *head)
{
	list_t *current_node;

	while ((current_node = head) != NULL)
	{
		head = head->next;
		free(current_node->str);
		free(current_node);
	}
}
