#include "lists.h"

/**
 * reverse_listint - reverses a linked list
 * @head: pointer to first node in the list
 * Return: pointer to first node in the new list
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *prio = NULL;
	listint_t *next = NULL;

	while (*head)
	{
		next = (*head)->next;
		(*head)->next = prio;
		prio = *head;
		*head = next;
	}

	*head = prio;
	return (*head);
}
