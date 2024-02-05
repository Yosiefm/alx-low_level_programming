#include "lists.h"

/**
 * add_nodeint - adds a new node at the begining
 * of listint_t list
 * @head: a pointer to the address of head
 * of the listint_t list
 * @n: integer for the new node to contain
 * Return: if the function fails - NULL
 * Otherwise - the address of a new element
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new;

	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);

	new->n = n;
	new->next = *head;

	*head = new;

	return (new);
}
