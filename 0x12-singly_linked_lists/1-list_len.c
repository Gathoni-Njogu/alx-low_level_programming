#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * list_len - fxn to show the number of elements of list_t
 * @h: The linked list List_t
 *
 * Return: The number of elements of list_t
 */

size_t list_len(const list_t *h)
{
	size_t count = 0;

	while (h)
	{
		h = h->next;
		count++;
	}
	return (count);
}
