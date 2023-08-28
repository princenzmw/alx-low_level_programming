#include "lists.h"

/**
 * free_listint - Frees a listint_t list.
 * @head: A pointer to the head of the list.
 *
 * Return: nothing.
 */
void free_listint(listint_t *head)
{
	listint_t *temp;

	while (head)
	{
		temp = head;
		head = head->next;
		free(temp);
	}
}
