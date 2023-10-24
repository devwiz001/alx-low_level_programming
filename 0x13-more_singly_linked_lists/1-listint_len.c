#include "lists.h"
#include <stdio.h>
/**
 * listint_len - this will return the number of elements listint_t linked list.
 * @h: i can say this is a pointer to the head of the list.
 * Return: The number of nodes in the list.
 */
size_t listint_len(const listint_t *h)
{
	size_t node_count = 0;

	while (h != NULL)
	{
		node_count++;
		h = h->next;
	}

	return (node_count);
}
