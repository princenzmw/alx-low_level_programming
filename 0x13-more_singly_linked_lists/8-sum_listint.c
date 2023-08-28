#include "lists.h"

/**
 * sum_listint - Calculates the sum of all elements in a listint_t list.
 * @head: A pointer to the head of the list.
 *
 * Return: The sum of the values, or 0 if the list is empty.
 */
int sum_listint(listint_t *head)
{
	int sum = 0;

	while (head)
	{
		sum += head->n;
		head = head->next;
	}

	return (sum);
}
