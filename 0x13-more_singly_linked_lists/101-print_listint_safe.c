#include "lists.h"

/**
 * print_listint_safe - Prints all elements of a listint_t list safely.
 * @head: A pointer to the head of the list.
 * Return: The number of nodes.
 */
size_t print_listint_safe(const listint_t *head)
{
	const listint_t *slow = head, *fast = head;
	size_t node_count = 0;

	while (slow && fast && fast->next)
	{
		printf("[%p] %d\n", (void *)slow, slow->n);
		slow = slow->next;
		fast = fast->next;
		node_count++;

		if (slow == fast)
		{
			printf("-> [%p] %d\n", (void *)slow, slow->n);
			break;
		}
	}

	return (node_count);
}
