#include "lists.h"

/**
 * get_nodeint_at_index - Returns the node at a specific index.
 * @head: A pointer to the head of the list.
 * @index: The index of node to get, starting at 0.
 *
 * Return: A pointer to the node at the specified index,
 *		or NULL if not found.
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int count = 0;

	while (head)
	{
		if (count == index)
		{
			return (head);
		}
		head = head->next;
		count++;
	}

	return (NULL);
}
