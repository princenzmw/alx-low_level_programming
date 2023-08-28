#include "lists.h"

/**
 * listint_len - Counts the number of elements in a listint_t list.
 * @h: A pointer to the head of the list.
 *
 * Return: The number of nodes.
 */
size_t listint_len(const listint_t *h)
{
	size_t node_count = 0;

	while (h)
	{
		h = h->next;
		node_count++;
	}

	return (node_count);
}
