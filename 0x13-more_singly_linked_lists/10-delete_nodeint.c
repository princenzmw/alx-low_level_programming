#include "lists.h"

/**
 * delete_nodeint_at_index - Deletes a node at specific index.
 * @head: A pointer to pointer to the head of the list.
 * @index: The index of the node to delete.
 *
 * Return: 1 if successful, -1 if failed.
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *temp, *prev = NULL;
	unsigned int count;

	if (head == NULL || *head == NULL)
	{
		return (-1);
	}

	temp = *head;

	if (index == 0)
	{
		*head = (*head)->next;
		free(temp);

		return (1);
	}

	for (count = 0; temp != NULL && count < index; count++)
	{
		prev = temp;
		temp = temp->next;
	}

	if (temp == NULL)
	{
		return (-1);
	}

	prev->next = temp->next;
	free(temp);

	return (1);
}
