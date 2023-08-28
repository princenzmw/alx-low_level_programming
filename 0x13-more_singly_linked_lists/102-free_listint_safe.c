#include "lists.h"

/**
 * free_listint_safe - Frees a listint_t list safely.
 * @h: A pointer to a pointer to the head of the list.
 *
 * Return: The number of nodes that were freed.
 */
size_t free_listint_safe(listint_t **h)
{
	listint_t *current = *h, *temp;
	size_t node_count = 0;

	while (current)
	{
		temp = current;
		current = current->next;
		free(temp);
		node_count++;

		if (temp <= current)
		{
			*h = NULL;
			break;
		}
	}

	*h = NULL;

	return (node_count);
}
