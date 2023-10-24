#include <stdlib.h>
#include "lists.h"
/**
 * add_nodeint_end - this adds a new node at the end of a listint_t list
 * @head: this is a pointer to a pointer to the head of the list
 * @n: the integer value to be added to the new node
 * Return: The address of the new element
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new_node = malloc(sizeof(listint_t));
	listint_t *current = *head;

	if (new_node == NULL)
		return (NULL);

	new_node->n = n;
	new_node->next = NULL;

	if (*head == NULL)
	{
		*head = new_node;
	}
	else
	{
		while (current->next != NULL)
		{
			current = current->next;
		}
		current->next = new_node;
	}

	return (new_node);
}

