#include "lists.h"

/**
 * dlistint_len - finds number of elements in a list
 * @h: points to the head node
 * Return: number of elements
 */
size_t dlistint_len(const dlistint_t *h)
{
	const dlistint_t *temp = h;
	size_t elem = 0;

	while (temp != NULL)
	{
		temp = temp->next;
		elem += 1;
	}
	return (elem);
}

