#include "lists.h"

/**
 * list_len - calculates the number of element
 * @h: pointer to a list
 * Return: integer
 */

size_t list_len(const list_t *h)
{
	const list_t *temp;
	unsigned int counter = 0;

	temp = h;
	while (temp)
	{
		counter++;
		temp = temp->next;
	}
	return (counter);
}
