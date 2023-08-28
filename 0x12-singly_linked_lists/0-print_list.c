#include "lists.h"

/**
 * print_list - print elements in a linked list
 *
 * @h: pointer to head first node
 *
 * Return: Number of nodes
 */

size_t print_list(const list_t *h)
{
	size_t node_count = 1;

	/* Return 0 as the number of nodes if the linked list is empty */
	if (h == NULL)
		return (0);

	/* Loop through the linked list */
	while (h->next != NULL)
	{
		/* If str is NULL, print the length as 0 and str as "(nil)" */
		if (h->str == NULL)
			printf("[%d] %s\n", 0, "(nil)");
		else
			printf("[%d] %s\n", h->len, h->str);

		/* Go to the next node */
		h = h->next;
		/*Increment the count number of nodes*/
		node_count += 1;
	}

	/* Print information for the last node */
	printf("[%d] %s\n", h->len, h->str);

	return (node_count);
}
