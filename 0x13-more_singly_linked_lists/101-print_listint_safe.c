#include "lists.h"

listint_t *add_nodeint(listint_t **head, const int n);

/**
 * print_listint_safe - Prints a listint_t linked list.
 * @head: A pointer to the head of the list.
 * Return: The number of nodes in the list.
 */
size_t print_listint_safe(const listint_t *head)
{
	size_t count = 0;
	const listint_t *current = head;
	const listint_t *visitedNodes[1024];

	while (current != NULL)
	{
		size_t i;

		for (i = 0; i < count; i++)
		{
			if (current == visitedNodes[i])
			{
				printf("-> [%p] %d\n", (void *)current, current->n);

				return (count);
			}
		}

		visitedNodes[count++] = current;
		printf("[%p] %d\n", (void *)current, current->n);
		current = current->next;
	}

	return (count);
}

#include "lists.h"

/**
 * add_nodeint - Adds a new node at the beginning of listint_t list.
 * @head: A pointer to a pointer to the head of the list.
 * @n: The value to add to the new node.
 *
 * Return: A pointer to the new head of the list.
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new_node = malloc(sizeof(listint_t));

	if (new_node == NULL)
	{
		return (NULL);
	}

	new_node->n = n;
	new_node->next = *head;
	*head = new_node;

	return (new_node);
}
