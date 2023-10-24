#include <stdio.h>
#include "lists.h"
/**
 * print_listint - this wil print all the element of a listint list
 * @h: this is a pointer pointing to the head of the list
 * Return: the number of nodes in the list
 */
size_t print_listint(const listint_t *h)
{
	size_t node_count = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		node_count++;
	}
	return (node_count);
}
