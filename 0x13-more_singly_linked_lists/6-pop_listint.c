#include "lists.h"

/**
 * pop_listint - Deletes the head node of a listint_t list.
 * @head: A pointer to pointer to the head of the list.
 *
 * Return: The value stored in the head node.
 */
int pop_listint(listint_t **head)
{
	if (*head == NULL)
	{
		return (0);
	}

	int value = (*head)->n;
	listint_t *temp = *head;
	*head = (*head)->next;
	free(temp);

	return (value);
}
