#include <stdlib.h>
#include "lists.h"
/**
 * pop_listint - this deletes the head node
 * @head: @head is a pointer to a pointer to the head of the list.
 *
 * Return: return 0 if it is. If the list is not empty
 */
int pop_listint(listint_t **head)
{
	int data = 0;
	listint_t *temp;

	if (head == NULL || *head == NULL)
		return (0);

	temp = *head;
	data = temp->n;
	*head = temp->next;
	free(temp);

	return (data);
}

